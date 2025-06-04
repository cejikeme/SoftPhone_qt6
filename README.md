# SoftPhone VOIP Asterisk Ed137 Pjsip PBX phone
Softphone is SIP-based virtual PBX software supports ed137 devices.

Softphone has a Fast Fourier Transform (FFT) plotter sample on it, signal catch from rtp packets. 

There is a sample udp tcp communication inside the software.

<p align="center"><a href="https://github.com/takyonxxx/Softphone/blob/master/Softphone.png">
		<img src="https://github.com/takyonxxx/Softphone/blob/master/Softphone.png" 
		name="variometer" width="800" height="600" align="bottom" border="1"></a></p>

## Quick Checklist to Update this repo to a newer qt 
 - Install Qt5/6 and all dependencies.
	   sudo apt install libspeexdsp-dev libspeex-dev
	   sudo apt-get install libasound2-dev libssl-dev
	   sudo apt-get install libfftw3-dev
         sudo apt-get install libsnmp-dev
	   sudo apt-get install libboost-all-dev

 - Update .pro file for modern Qt.
 - Update includes and code for Qt5/6 compatibility.
 - Test build (qmake && make).