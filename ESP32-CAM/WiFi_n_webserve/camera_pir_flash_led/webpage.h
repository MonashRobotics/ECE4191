const char webpage[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html>
<head>
  <title>ESP32-CAM with PIR Sensor</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background: #f4f4f4;
      text-align: center;
      padding: 20px;
    }
    h1 {
      color: #333;
    }
    img {
      border: 4px solid #555;
      border-radius: 8px;
      margin: 20px 0;
    }
    p {
      font-size: 1.2em;
    }
    .status {
      font-weight: bold;
      color: #007BFF;
    }
    button {
      padding: 12px 24px;
      font-size: 1em;
      color: #fff;
      background: #28a745;
      border: none;
      border-radius: 5px;
      cursor: pointer;
    }
    button:hover {
      background: #218838;
    }
  </style>
  <script>
    function fetchSensor() {
      fetch('/sensor').then(resp => resp.text()).then(text => {
        document.getElementById('pir').innerText = text.trim() == "1" ? "Motion Detected" : "No Motion";
      });
    }
    function toggleLED() {
      fetch('/led').then(resp => resp.text()).then(txt => {
        console.log("LED response:", txt);
      });
    }
    setInterval(fetchSensor, 1000);
    window.onload = fetchSensor;
  </script>
</head>
<body>
  <h1>ESP32-CAM Stream + PIR Sensor</h1>
  <img src="/stream" width="320" height="240"><br>
  <p>PIR Sensor: <span class="status" id="pir">loading...</span></p>
  <button onclick="toggleLED()">Toggle LED</button>
</body>
</html>
)rawliteral";
