#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator knowledge_hints = {
        []() -> std::string { return "knowledge_hints"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.knowledge_hints) {
                return std::nullopt;
            }

            return R"WOTWR(
// Knowledge Hints
timer: 9|101|9|150
3|1|8|9|101|bool|true
9|150|8|9|100|bool|false
// Mouldwood Entrance
9|150|4|24|127|-4306|183|-4268|8|9|0|int|1|skip=1
9|150|4|24|127|-4306|183|-4268|4|17|18793|25789|0|4|17|24|14|0|8|9|129|bool|true
9|150|4|24|127|-4306|183|-4268|8|9|100|bool|true
9|129|4|17|9|0|1|6|f=300|#Motay's Note#\nThe moki will only open the entrance once you find $[2|14].
// Baur the Bear
9|150|4|24|-527|-4033|-461|-4018|8|9|0|int|2|skip=1
9|150|4|24|-527|-4033|-461|-4018|4|17|28895|29098|0|4|17|24|118|0|8|9|129|bool|true
9|150|4|24|-527|-4033|-461|-4018|8|9|100|bool|true
9|129|4|17|9|0|2|6|f=300|#Motay's Note#\nThe bear will only wake if you use $[2|118].
// Dash Tree Platform
9|150|4|24|-44|-4449|-32|-4439|8|9|0|int|3|skip=1
9|150|4|24|-44|-4449|-32|-4439|4|17|24|102|0|4|17|24|101|0|4|17|24|104|0|8|9|129|bool|true
9|150|4|24|-44|-4449|-32|-4439|8|9|100|bool|true
9|129|4|17|9|0|3|6|f=300|#Motay's Note#\nThe semisolid platform will remain solid until you find $[2|102], $[2|101] or $[2|104].
// Voice Door
9|150|4|24|-98|-4245|-60|-4205|8|9|0|int|4|skip=1
9|150|4|24|-98|-4245|-60|-4205|4|17|46462|59806|0|8|9|129|bool|true
9|150|4|24|-98|-4245|-60|-4205|8|9|100|bool|true
9|129|4|17|9|0|4|6|f=300|#Motay's Note#\nThe moki will only open the door to Glades once you get the #Voice of the Forest# from Kwolok.
// Reset if the player exited the hitbox
9|150|4|17|9|100|0|8|9|129|bool|false
9|150|8|9|0|int|0
// Regenerate in late areas
9|150|8|9|100|bool|false
9|150|4|24|-486|-3773|-476|-3763|8|9|100|bool|true  // Ori touches Reach briefly after falling from the Wellspring escape
15|200|4|26|5|4|27|13|4|17|9|100|0|8|9|20|int|1
9|150|4|17|9|20|1|8|9|20|int|2  // One frame delay to wait for spawn items
9|20=2|4|17|24|77|0|8|9|132|bool|true
9|132|6|f=300|#Motay's Note#\nIn Moki and Gorlek, entering zones after #The Wellspring# won't be required until you find $[2|77].
// Flap for Reach TP
28895|54235|8|9|21|int|1
9|150|4|17|9|21|1|8|9|21|int|2
9|21=2|4|17|24|118|0|8|9|100|bool|false
9|21=2|4|17|24|118|0|4|24|-284|-3971|-223|-3945|8|9|100|bool|true  // Ignore on map activations
9|21=2|4|17|24|118|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|4] won't be required until you find $[2|118].
// Glide for Mouldwood TP
18793|38871|8|9|22|int|1
9|150|4|17|9|22|1|8|9|22|int|2
9|22=2|4|17|24|14|0|8|9|100|bool|false
9|22=2|4|17|24|14|0|4|24|499|-4381|561|-4335|8|9|100|bool|true
9|22=2|4|17|24|14|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|6] won't be required until you find $[2|14].
// Water for East Luma TP
945|58183|8|9|23|int|1
9|150|4|17|9|23|1|8|9|23|int|2
9|23=2|4|17|6|2000|0|8|9|100|bool|false
9|23=2|4|17|6|2000|0|4|24|-1334|-4160|-1280|-4121|8|9|100|bool|true
9|23=2|4|17|6|2000|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|2] won't be required until you find $[9|0].
// Water for West Luma TP
945|1370|8|9|24|int|1
9|150|4|17|9|24|1|8|9|24|int|2
9|24=2|4|17|6|2000|0|8|9|100|bool|false
9|24=2|4|17|6|2000|0|4|24|-1677|-4175|-1625|-4156|8|9|100|bool|true
9|24=2|4|17|6|2000|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|13] won't be required until you find $[9|0].
// Burrow for East Wastes TP
20120|49994|8|9|25|int|1
9|150|4|17|9|25|1|8|9|25|int|2
9|25=2|4|17|24|101|0|8|9|100|bool|false
9|25=2|4|17|24|101|0|4|24|1946|-3910|2018|-3857|8|9|100|bool|true
9|25=2|4|17|24|101|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|10] won't be required until you find $[2|101].
// Burrow for Outer Ruins TP
20120|41398|8|9|26|int|1
9|150|4|17|9|26|1|8|9|26|int|2
9|26=2|4|17|24|101|0|8|9|100|bool|false
9|26=2|4|17|24|101|0|4|24|2013|-3690|2067|-3658|8|9|100|bool|true
9|26=2|4|17|24|101|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|11] won't be required until you find $[2|101].
// Burrow for Inner Ruins TP
10289|4928|8|9|27|int|1
9|150|4|17|9|27|1|8|9|27|int|2
9|27=2|4|17|24|101|0|8|9|100|bool|false
9|27=2|4|17|24|101|0|4|24|2106|-4001|2142|-3972|8|9|100|bool|true
9|27=2|4|17|24|101|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|14] won't be required until you find $[2|101] and the four Wisps.
// Burrow for Willow's End TP
16155|41465|8|9|28|int|1
9|150|4|17|9|28|1|8|9|28|int|2
9|28=2|4|17|24|101|0|8|9|100|bool|false
9|28=2|4|17|24|101|0|4|24|400|3870|447|-3847|8|9|100|bool|true
9|28=2|4|17|24|101|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|12] won't be required until you find $[2|101].
// Bash for Midnight Burrows TP
24922|42531|8|9|29|int|1
9|150|4|17|9|29|1|8|9|29|int|2
9|29=2|4|17|24|0|0|8|9|100|bool|false
9|29=2|4|17|24|0|0|4|24|-960|-4586|-931|-4564|8|9|100|bool|true
9|29=2|4|17|24|0|0|4|17|9|100|0|6|f=300|#Motay's Note#\nUsing the $[5|0] won't be required until you find $[2|0].
)WOTWR";
        },
    };
}
