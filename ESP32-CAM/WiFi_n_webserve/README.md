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

# To start

There are two parts in this tutorial. I recommend go through the first one before jumping to the second.

## [Wi-Fi web server + Camera](./just_camera/)

We learn all the basics and build a web server which can live stream the ESP camera.

## [Wi-Fi web server + Camera + PIR sensor + Flash light control](./camera_pir_flash_led/)

Based on the first part, we add live PIR sensor feedback and flash LED control on our web server.