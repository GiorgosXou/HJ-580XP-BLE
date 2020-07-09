
# "HJ-580XP" - A friendly introduction

*```A friendly introduction to "HJ-580XP" tiny BLE Module, resorces and example of use with Arduino Uno.```*

* Apart from its tiny 5*6.2mm size, this ble is also quite cheap but the best of all is that it runs on  2.5V - 3.7V and it has Ultra-low power consumption mode of 2uA - 11.5uA !!!

* Seems like to be one of the smallest BLE modules i've ever found out there on the Internet! and i feel amazing that i finally got it working after so many Issues and dificulties i came across, especially based on my experience with such so tiny electronics and my knowledge of electronics in general [...]

## ```🤔``` How to use it with Arduino UNO

 ### ```Connections```
* *Based on the first [image](/images/1.jpg) under*:	<br><br>
    |ARDUINO|BLE|Description|Pages|
	|-|-|-|-|
	|GND|P06| Enables Uart RX Pin|<sub><sup>d10, s6</sup></sub>|
	|D11|P05/RX|Receives From D11|<sub><sup>d10, s17</sup></sub>|
	|D10|P04/TX|Transmits To D10|<sub><sup>d10, s17</sup></sub>|
	|D7|P00| Configuration Mode|<sub><sup>d9, s7</sup></sub>|
	|3.3V|3.3V| 3.3V Source|<sub><sup>d10</sup></sub>|
	|GND|GND|Ground|<sub><sup>d10</sup></sub>|
	<br>
* <sub><sup>*This type of connection series, allows you not to have all, but most of the functionalities of BLE available.*</sub></sup>
*  <sub><sup>***s** stands for shoftware-manual and **d** for datasheet*</sub></sup>

 ### ```Code Examples```
Some examples to get you started,  can be found under [this](https://github.com/GiorgosXou/BLEPad_UART) repository i forked <sub><sup>*```(in case of anything happening to the original one)```*</sup></sub> which ended up helping me create my own example, under the folder examples [here](/examples/BLE-HJ-580XP_jul07a/BLE-HJ-580XP_jul07a.ino) in this repository.

<p align="left">
<img src="/images/1.jpg" width="150" height="150"/><img src="/images/2.jpg" width="150" height="150"/><img src="/images/3.jpg" width="150" height="150"/><img src="/images/4.jpg" width="150" height="150"/>


</p>

## ```📝``` Informations & Resorces


* *Resorces*
  |L|Type |Sources|Description|
  | ------ | ------ | ------ | ------ |
  |[1](/[Part & Info] - Files/pdfs/HJ-580Series_SoftwareManualEN_V1.0.pdf)|Shoftware Manual|[dialog](https://support.dialog-semiconductor.com/system/files/attachments/HJ-580Series_SoftwareManualEN_V1.0.pdf)|AT Comands & etc.|
  |[2](/[Part & Info] - Files/pdfs/HJ-580XP DataSheet English V2.2.pdf)|Datasheet|[dialog](https://support.dialog-semiconductor.com/system/files/attachments/HJ-580XP%20DataSheet%20English%20V2.2.pdf)| Datasheet|
  |[3]()|A Project|[aprbrother](https://github.com/GiorgosXou/BLEPad_UART)|  BLE - Old Framework?|
  |[4](/[Part & Info] - Files/EasyEDA)|BLE Part|[EasyEda ](https://easyeda.com/component/48096e19116949238b9b70915981978b)|BLE Part on EasyEda|
  |[5]()|Serial|[arduino](https://www.arduino.cc/reference/en/language/functions/communication/serial/)| Serial Comunication|
  |[6]()|BLE Part|[Ebay](https://www.ebay.com/itm/DA14580-HJ-580X-Bluetooth-UART-Wireless-Data-Transceiver-Module-for-Arduino/272512707712?hash=item3f7305ec80:g:Iv4AAOSw5cNYb~I6)|Where I bought it|
  |[7](/[Part & Info] - Files/grabCAD/hj-580xp-bluetooth-module-1.snapshot.7.zip)|3D Model|[grabcad](https://grabcad.com/library/hj-580xp-bluetooth-module-1)|3D model of BLE|

<sup>**L :**  *```All files needed are "localy" stored in this repository or forked too, in case of any URL or repository expiration```*<sup>

## ```⚠️``` Caution  !!!

* <sup>Make sure you have "HJ-580**XP**" and not "HJ-580**LA**" version.</sup>
  * *```XP comes PREPROGRAMMED insted of LA which is not```*
  * *```In case you bought **LA** check this:``` [```video```](https://www.youtube.com/watch?v=71hdcDCAY7o )* ```.```<br><br>
 * <sup>It is called "HJ-580**XP**" althought seems like it's called "HJ-580**X**" too.</sup>
 * <sup>If **P06** is not grounded for at least  5ms before sending data from arduino's **D10** to **P05/RX** pin,  the data won't be read from the BLE.</sup>
 * <sup>As much as i can be aware, at least mine "HJ-580XP", doesn't look like the one on the [seller's image](/images/2.jpg) which is what it suposed to seem based on my search (it should have been black and with a tiny cut and etc.), which makes me think if that is the "HJ-580LA" version but programmed by them? doesn't "really" matter as it is the same in dimensions and has only minor and not that important deferences [...]</sup>
 
