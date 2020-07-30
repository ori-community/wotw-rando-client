
cd "%~dp0"

:: Either change paths or build yourself and run with nobuild
if NOT "%1"=="nobuild" (
	"C:\Program Files (x86)\Microsoft Visual Studio\2019\Preview\MSBuild\Current\Bin\MsBuild.exe" -targets -p:Configuration=MinSizeRel -p:Platform=x64 C:\Users\WorstMirari\Documents\GitHub\OriWotwRandomizerClient\build\win64\WotWRandomizer.sln
	IF ERRORLEVEL 1 (
		echo BUILD FAILED
		timeout /t 14
		exit 1
	)
)

copy "projects/SeedGen/loc_data.csv" "C:/moon/loc_data.csv" /Y
copy "projects/SeedGen/areas.wotw" "C:/moon/areas.wotw" /Y
copy "VERSION" "C:/moon/VERSION" /Y

if NOT "%1"=="buildonly" (
	cd "projects/SeedGen"

	call sbt assembly

	cd "../.."

	"ext/ahk/Ahk2Exe.exe" /in "RandoSettings.ahk" /icon "WotwRando.ico" /out "C:/moon/RandoSettings.exe"
	"ext/ahk/Ahk2Exe.exe" /in "projects/AutoTracker/OriAutoTracker.ahk" /icon "WotwRando.ico" /out "C:/moon/ItemTracker.exe"
	"ext/ahk/Ahk2Exe.exe" /in "WotwRando.ahk" /icon "WotwRando.ico" /out "C:/moon/WotwRando.exe"
)
