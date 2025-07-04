# What's this tutorial about?

The ESP32-CAM comes with an excellent built-in Wi-Fi module, allowing you to set it up as a web server. This lets you handle tasks like streaming video from the camera, displaying live sensor data, and remotely controlling the flash LED, all from a single web page.

<video width="500" height="300" controls>
  <source src="../Figures/webserver_demo.mp4" type="video/mp4">
  Your browser does not support the video tag.
</video>

If you can't see the video, you can [watch it here](../Figures/webserver_demo.mp4).

# What do you need?

- An ESP32-CAM with camera module
- An FTDI adapter (or, in my case, an ESP32-CAM-MB adapter because I couldn’t be bothered hunting down a USB Mini-B cable)
- A PIR sensor
- A device that can connect to Wi-Fi and open a browser
- An available Wi-Fi network or hotspot (avoid eduroam; it usually won’t work)

# Wi-Fi web server + Camera

Many online tutorials introduce you to the CameraWebServer example, which gives you a fancy web page that streams video from the camera and lets you adjust parameters like brightness. But for this unit, you probably couldn’t care less about taking fancy photos. So I’ve stripped it down to a simpler example and will explain each part.

## Connection

Simply connect your ESP32-CAM to the camera module. For programming, plug the ESP32-CAM into the adapter, then connect the whole setup to your computer.

## Coding

Find the code for this part in [this folder](./just_camera/). `just_camera.ino` is the main file. 