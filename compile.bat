:: change these if necessary
set MSBuildPath="C:\Program Files (x86)\Microsoft Visual Studio\2019\Preview\MSBuild\Current\Bin\MsBuild.exe"
set JavaHome="C:\Program Files\Java\AzJDK_8\jdk1.8.0_265\"
cd "%~dp0"


if "%1"=="compileonly" (
	cd "projects"
	cd "SeedGen"
	copy ".\loc_data.csv" "C:\moon\loc_data.csv" /Y
	copy ".\areas.wotw" "C:\moon\areas.wotw" /Y
	cd "..\.."
	copy ".\VERSION" "C:\moon\VERSION" /Y
	".\ext\ahk\Ahk2Exe.exe" /in ".\RandoSettings.ahk" /icon ".\WotwRando.ico" /out "C:\moon\RandoSettings.exe"
	echo built RandoSettings.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\projects/AutoTracker/OriAutoTracker.ahk" /icon ".\WotwRando.ico" /out "C:\moon\ItemTracker.exe"
	echo built ItemTracker.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\WotwRando.ahk" /icon ".\WotwRando.ico" /out "C:\moon\WotwRando.exe"
	echo built WotwRando.exe
	echo AHK compile complete!
	timeout /t 3
	exit 0
)
if NOT "%1"=="buildonly" (
	cd "projects\SeedGen"
	call sbt assembly --java-home=%JavaHome%
	cd "..\.."
	timeout /t 3
)

:: Either change paths or build yourself and run with nobuild
if NOT "%1"=="nobuild" (
	%MSBuildPath% -targets -p:Configuration=RelWithDebInfo -p:Platform=x64 C:\Users\WorstMirari\Documents\GitHub\OriWotwRandomizerClient\build\win64\WotWRandomizer.sln
	IF ERRORLEVEL 1 (
		echo BUILD FAILED
		timeout /t 14
		exit 1
	)
)

copy "projects\SeedGen\loc_data.csv" "C:\moon\loc_data.csv" /Y
copy "projects\SeedGen\areas.wotw" "C:\moon\areas.wotw" /Y
copy "VERSION" "C:\moon\VERSION" /Y

if NOT "%1"=="buildonly" (
	".\ext\ahk\Ahk2Exe.exe" /in ".\RandoSettings.ahk" /icon ".\WotwRando.ico" /out "C:\moon\RandoSettings.exe"
	echo built RandoSettings.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\projects/AutoTracker/OriAutoTracker.ahk" /icon ".\WotwRando.ico" /out "C:\moon\ItemTracker.exe"
	echo built ItemTracker.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\WotwRando.ahk" /icon ".\WotwRando.ico" /out "C:\moon\WotwRando.exe"
	echo built WotwRando.exe

	echo BUILD SUCCESS!
	timeout /t 10
)
