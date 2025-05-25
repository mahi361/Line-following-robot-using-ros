

<h1 align="center"> Line following robot using ros </h1>
<p align="center">
<img src=".github/assets/hits_logo.png" width="700" height="">
</p>





> *Abstract:*An autonomous robot that can follow a black line drawn on a surface with a contrasting colour is called a line-following robot. It is intended to follow the line and move automatically. The robot recognises the line using a variety of optical sensors, so helping the robot maintain its course. Its two sensor array allows for precise and adaptable movement. DC gear motors are used to regulate the robot's wheel movement. The motor driven circuit powers the DC gear motor. The goal of this project is to put the algorithm into practice, regulate the robot's movement by correctly adjusting the control settings, and improve performance. It can be utilised for tour guides in museums, small-scale home applications, industrial automated equipment haulers, and other related uses.

Group Members:

* [Mahidhar kollipara](https://github.com/mahi361)



<h2>Line following robot </h2>

<div align="center">
<img src = "https://github.com/mahi361/petcare_robot/blob/main/Design_files/design_01.png" width="100%">
</div>


<h2>Components</h2>

<div align="center">
<table>
  <tr >
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/esp32-cam.jpeg" width="100%"><br>(a) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/esp32.jpeg" width="100%"><br>(b) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/servo_motor.jpeg" width="100%"><br>(c) </td>
  </tr>
  <tr>  
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/li-ion.jpeg" width="1005"><br>(e) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/l298n.jpeg" width="100%"><br>(f) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/Screenshot%202025-05-25%20170041.png" width="100%"><br>(g) 
    <tr>  
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/li-ion.jpeg" width="1005"><br>(e) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/l298n.jpeg" width="100%"><br>(f) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/Screenshot%202025-05-25%20170041.png" width="100%"><br>(g) 
   
    <tr>  
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/pump%20motor.jpeg" width="100%"><br>(j) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/wheels.jpeg" width="100%"><br>(j) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/acrylic.jpeg" width="100%"><br>(k) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/pvc.jpeg" width="100%"><br>(l) </td>
  </tr>  
  
  </tr>
</table>
<p>(a)	Arduino uno (1), (b) 	wheels (1), (c)  dc Hobby motor, (d)vL298N Motor driver (1), (e) Lithium ion cells (8x), (f) IR sensror array(1), (g) acrylic sheets(2x), (h) cable, (i) jumper wires(10), (</p>
</div>

<h2>Overall Framework</h2>

<h3>1.Circuit diagram</h3>
<br>
<div align="center">
<table>
  <tr>
    <td width="100%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Web_page_interface/web_page.png" width="100%"> </td>
   
  </tr>
</table>
<p>Web Circuit diagram.</p>
</div>
<br>


<h3>2.Prototype images </h3>

<br>

<div align="center">
<table>
  <tr>
    <td width="50%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Sinric_app/app.png" width="100%"><br>(a) </td>
  <br>(b) </td>
    
  </tr>
</table>

</div>
<br>








## Results
# Pet Care robot
Pan_camera

This video will show the demonstrataion of pan_tilt_camera_in_mobile

![Example GIF](.github/assets/pan_videoo.gif)

## output video

This video will demonstarte how the robot moves and how the water and food will dispense in their respected boxes
![Examples GIF](.github/assets/output_video_01.gif)





  

## Quick Links:
[![report](https://img.shields.io/badge/Final-Report-brightgreen)](https://github.com/mahi361/petcare_robot/blob/main/.github/assets/DP2_PET%20CARE.pdf)





## References Used:
1.	Alisher K, Alexander K, Alexandr B. Control of the mobile robots with ROS in robotics courses. Procedia Engineering. 2015 Jan 1;100:1475-84.
2.	Villa MA, Florez DR, Guzmán LS, Toledo NV, Pulido C. ROS-based human leader and robot follower using a Pioneer 3-DX robot. Revista UIS Ingenierías. 2016;15(2):63-71.
3.	Zaman S, Slany W, Steinbauer G. ROS-based mapping, localization and autonomous navigation using a Pioneer 3-DX robot and their relevant issues. In2011 Saudi International Electronics, Communications and Photonics Conference (SIECPC) 2011 Apr 24 (pp. 1-5). IEEE.
4.	Joseph L. ROS Robotics projects. Packt Publishing Ltd; 2017 Mar 31.
5.	Araújo A, Portugal D, Couceiro MS, Rocha RP. Integrating Arduino-based educational mobile robots in ROS. Journal of Intelligent & Robotic Systems. 2015 Feb;77:281-98.
