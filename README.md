# curlerTimer
An Internet of Things project to control turning on and off hair curlers and a flat iron so they are warm when my wife is ready for them.

I came up with this project a few years ago to help keep the house from burning down when my wife would leave the curlers on when she went to work.  It has evolved through several versions over the years:

version 1)  A simple mechanical timer, like the one used to fool burglers into thinking you are home.
            PROS:  very simple and cheap, extra minutes of sleep in the morning!
            CONS:  does all of the weekends by default, and gets messed up when the power goes out.
            
version 2)  An Adafruit Trinket with a real-time-clock and a solid state relay (the mechanical relay was too loud for sleeping)
            PROS:  Still pretty simple, extra minutes of sleep in the morning!
            CONS:  Difficult to re-program for daylight savings, or to change the on/off times.
            
version 3)  An Adafruit Trinket Pro with real-time-clock and two solid state relays.
            PROS:  Added a second port for the flat iron, still getting extra sleep in the morning!
            CONS:  Still difficult to re-program for daylight savings, or to change on/off times.
            
version 4)  Never made it out of testring -- Upgrade to Raspberry Pi, added in weather forcasting and looked at
            adding NJ Transit schedule so my wife wouild know if the trains were late.  But, ran into issues
            with powering the USB WIFI dongle, so it was not reliable. :(
            PROS:  Cool factor with the weather and train schedule
            CONS:  WLAN power problems, kept disconnecting
            
version 5)  An Adafruit Huzzah 8266 breakout board with web server, NTP (Internet clock) and easy to program
            start/top times for the curlers and flat iron.
            PROS:  Easy to program, web interface, Internet clock
            CONS:  Doesn't have weather (yet) or NJ Transit schedule (yet)
