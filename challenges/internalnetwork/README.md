# Internal Network Challenge

Test participant's awareness skeels
Creator: quanyang

## Challenge Text

```html
We found out that winc0rp has an internal website hosted on this ip address. However, is it really internal?

I heard the internal website is located at "internal.proxy.winc0rp.com"

Please find the internal website hosted on 127.0.0.1:8080
```

## Setup Guide

Scripts to run docker commands.

/bin/sh dockerbuild.sh
/bin/sh dockerrun.sh

## Solution Details

Basically, there are multiple virtual hostnames and participants have to find out how to connect to the others without an actual domain name.

curl 192.168.99.100:8080 -H 'host: internal.proxy.winc0rp.com'

##

`CrossCTF{B@sic_P3ntesting_Sk33ls_Requir3d}`
