@echo off
color C0
echo Building .3dsx
make
color B0
echo Building .cxi
cxitool -n "Freebrew" -b "ciabuild/banner.bnr" "Freebrewrewrite.3dsx" "making.cxi" 
color A0
echo Building .cia
makerom -f cia -o FreeBrew.cia -content making.cxi:0:0
color E0
echo Moving files
move Freebrewrewrite.3dsx Compiledbuilds/Freebrew.3dsx
move FreeBrew.cia Compiledbuilds/FreeBrew.cia
echo Done!
color 0A
pause