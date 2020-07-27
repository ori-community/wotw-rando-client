copy "projects/SeedGen/loc_data.csv" "C:/moon/loc_data.csv" /Y
copy "projects/SeedGen/areas.wotw" "C:/moon/areas.wotw" /Y
copy "VERSION" "C:/moon/VERSION" /Y

cd "projects/SeedGen"

call sbt assembly

cd "../.."

"ext/ahk/Ahk2Exe.exe" /in "RandoSettings.ahk" /icon "WotwRando.ico" /out "C:/moon/RandoSettings.exe"
"ext/ahk/Ahk2Exe.exe" /in "projects/AutoTracker/OriAutoTracker.ahk" /icon "WotwRando.ico" /out "C:/moon/ItemTracker.exe"
"ext/ahk/Ahk2Exe.exe" /in "WotwRando.ahk" /icon "WotwRando.ico" /out "C:/moon/WotwRando.exe"