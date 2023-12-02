# Ori and the Will of the Wisps Randomizer Client

This repository contains the client/modloader part of the Ori and the Will of the Wisps Randomizer.


## Wiki

If you need help on how to install the randomizer, tutorials or other randomizer-related information, you can
read the wiki: https://wiki.orirando.com/


## Discord links:

Visit https://orirando.com/discord for the main ori speedrunning Discord
https://discord.gg/tpn9WydSQz for the development Discord.


## Dev instructions


### NOTICE

You will need to enable long path support in Git **BEFORE** you clone this repository.

Run this as administrator:

```
git config --system core.longpaths true
```

First you will have to generate the solution file, for this you will need cmake version 3.17 or higher
and Visual Studio 2022 (You might be able to use a lower version but you will have to change the gen-win64.bat file)
Once you have those dependencies please run gen-win64.bat, this will generate a solution file.
OriWotwRandomizerClient\build\win64\WotWRandomizer.sln
