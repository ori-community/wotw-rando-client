#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator qol = {
        []() -> std::string { return "qol"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.qol) {
                return std::nullopt;
            }

            return R"WOTWR(
// Quality of life
3|0|8|6|300|bool|true // Spawn Tuley
3|0|8|7|22|bool|true // Shriek Escape Healthbar
3|20|8|5|11|float|230 // Teleport Refills
3|20|8|5|13|float|23
3|0|8|7|9|bool|true // Better Stomp
3|0|8|7|10|bool|true
3|0|8|4|150|bool|true // Fragment Overflow
3|0|8|11666|4220|bool|true // No Cutscenes
3|0|8|58674|41644|bool|true
3|0|8|58674|37811|bool|true
3|0|8|5377|35023|bool|true
3|0|8|48248|3846|bool|true
3|0|8|945|9367|bool|true
3|0|8|48248|40451|bool|true
3|0|8|48248|37364|bool|true
3|0|8|20120|55196|bool|true
3|0|8|24922|45740|bool|true
3|0|8|37858|25031|bool|true
3|0|8|5377|21700|bool|true
3|0|4|19|14019|48794|1|8|14019|48794|int|1
3|0|4|19|937|34641|2|8|937|34641|int|2
3|0|8|10289|3621|bool|true
3|0|8|21786|51018|bool|true
3|0|8|28895|2108|bool|true
3|0|8|37858|23225|bool|true
3|0|8|16155|32922|bool|true
3|0|8|31136|3441|bool|true
3|0|8|7|20|bool|true
3|0|8|48248|5982|bool|true
3|0|8|48248|55122|bool|true
3|0|8|48248|46745|bool|true
3|0|8|48248|25267|int|2
3|0|8|48248|12799|int|3
3|0|8|48248|34756|bool|true
3|0|8|48248|6194|bool|true
3|0|8|48248|9394|bool|true
3|0|8|14019|57552|int|2
3|0|8|42178|50418|bool|true
3|0|8|48248|7646|bool|true
3|0|8|48248|45751|bool|true
3|0|8|48248|54806|bool|true
3|0|8|48248|46471|bool|true
3|0|8|48248|7321|bool|true
3|0|8|48248|30073|bool|true
3|0|8|14019|24683|int|4
3|0|8|48248|10337|int|2
3|0|8|48248|8985|bool|true
3|0|8|48248|56448|bool|true
3|0|8|48248|5186|bool|true
3|0|8|58674|58268|bool|true
3|0|8|3440|20131|bool|true
3|0|8|14019|16509|int|2
3|0|8|14019|30596|int|2
3|0|8|48248|7160|bool|true
3|0|8|48248|15833|bool|true
3|0|8|48248|52065|bool|true
3|0|8|48248|13320|bool|true
3|0|8|48248|5269|bool|true
3|0|8|14019|24683|int|5
3|0|4|17|14019|44578|0|8|14019|44578|int|1
46462|59806|8|937|6778|bool|true
24|14|8|18793|25789|bool|true
937|10071|8|9|0|int|2
!18793|63291|8|9|0|int|2
!28895|25522|8|9|0|int|2
!945|49747|8|9|0|int|2
9|0=2|4|17|937|10071|1|4|17|28895|25522|1|4|17|18793|63291|1|4|17|945|49747|1|8|10289|3804|bool|true
!10289|22102|8|58674|36832|bool|true
!10289|22102|8|58674|61616|int|6
3|1|16|0|0|0|Progress Summary // Progress Helper
3|1|16|1|0|0|[Ability1]View Progress
3|1|16|2|0|0|file:assets\icons\wheel\progress_summary.blue.png
3|1|16|4|0|0|0|4|16|ShowProgressWithHints
3|8|4|29|0|Pickups: $(14|2)\[total_pickup_count()]\n[goal_mode_progress()][relic_progress()]
3|8|8|9|19|int|$(5|50)
3|8|8|9|0|int|10
3|8|6|${0}|instant
5|51=0|8|9|0|int|11
5|51|4|27|14|8|9|0|int|11
9|0=11|8|9|19|int|$(5|51)
9|0=11|4|29|0|[map_relic_progress()]
9|0=11|8|9|0|int|10
9|0=11|18|${0}
5|51=14|18|
3|1|16|0|0|1|Tree Progress
3|1|16|1|0|1|[Ability1]View Progress
3|1|16|2|0|1|file:assets\icons\wheel\tree_progress.blue.png
3|1|16|4|0|1|0|8|9|0|int|38
9|0=38|8|9|0|int|25
9|0=38|6|${0}|instant
9|0=25|8|9|100|bool|false
9|0=25|4|29|0|#Trees found#: <>
9|0=25|4|17|0|77|1|8|9|100|bool|true
9|0=25|4|17|0|77|1|4|30|0|Regenerate
9|0=25|4|17|0|0|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|0|1|8|9|100|bool|true
9|0=25|4|17|0|0|1|4|30|0|Bash
9|0=25|4|17|0|120|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|120|1|8|9|100|bool|true
9|0=25|4|17|0|120|1|4|30|0|Glades Ancestral Light
9|0=25|4|17|0|121|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|121|1|8|9|100|bool|true
9|0=25|4|17|0|121|1|4|30|0|Marsh Ancestral Light
9|0=25|4|17|0|97|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|97|1|8|9|100|bool|true
9|0=25|4|17|0|97|1|4|30|0|Bow
9|0=25|4|17|0|101|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|101|1|8|9|100|bool|true
9|0=25|4|17|0|101|1|4|30|0|Burrow
9|0=25|4|17|0|102|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|102|1|8|9|100|bool|true
9|0=25|4|17|0|102|1|4|30|0|Dash
9|0=25|4|17|0|5|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|5|1|8|9|100|bool|true
9|0=25|4|17|0|5|1|4|30|0|Double Jump
9|0=25|4|17|0|62|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|62|1|8|9|100|bool|true
9|0=25|4|17|0|62|1|4|30|0|Flash
9|0=25|4|17|0|57|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|57|1|8|9|100|bool|true
9|0=25|4|17|0|57|1|4|30|0|Grapple
9|0=25|4|17|0|51|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|51|1|8|9|100|bool|true
9|0=25|4|17|0|51|1|4|30|0|Grenade
9|0=25|4|17|0|8|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|8|1|8|9|100|bool|true
9|0=25|4|17|0|8|1|4|30|0|Launch
9|0=25|4|17|0|100|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|100|1|8|9|100|bool|true
9|0=25|4|17|0|100|1|4|30|0|Sword
9|0=25|4|17|0|104|1|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|104|1|8|9|100|bool|true
9|0=25|4|17|0|104|1|4|30|0|Water Dash
9|0=25|4|17|9|100|0|4|30|0|None
9|0=25|8|9|100|bool|false
9|0=25|4|30|0|\n#Trees remaining#: <>
9|0=25|4|17|0|77|0|8|9|100|bool|true
9|0=25|4|17|0|77|0|4|30|0|Regenerate
9|0=25|4|17|0|0|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|0|0|8|9|100|bool|true
9|0=25|4|17|0|0|0|4|30|0|Bash
9|0=25|4|17|0|120|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|120|0|8|9|100|bool|true
9|0=25|4|17|0|120|0|4|30|0|Glades Ancestral Light
9|0=25|4|17|0|121|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|121|0|8|9|100|bool|true
9|0=25|4|17|0|121|0|4|30|0|Marsh Ancestral Light
9|0=25|4|17|0|97|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|97|0|8|9|100|bool|true
9|0=25|4|17|0|97|0|4|30|0|Bow
9|0=25|4|17|0|101|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|101|0|8|9|100|bool|true
9|0=25|4|17|0|101|0|4|30|0|Burrow
9|0=25|4|17|0|102|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|102|0|8|9|100|bool|true
9|0=25|4|17|0|102|0|4|30|0|Dash
9|0=25|4|17|0|5|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|5|0|8|9|100|bool|true
9|0=25|4|17|0|5|0|4|30|0|Double Jump
9|0=25|4|17|0|62|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|62|0|8|9|100|bool|true
9|0=25|4|17|0|62|0|4|30|0|Flash
9|0=25|4|17|0|57|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|57|0|8|9|100|bool|true
9|0=25|4|17|0|57|0|4|30|0|Grapple
9|0=25|4|17|0|51|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|51|0|8|9|100|bool|true
9|0=25|4|17|0|51|0|4|30|0|Grenade
9|0=25|4|17|0|8|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|8|0|8|9|100|bool|true
9|0=25|4|17|0|8|0|4|30|0|Launch
9|0=25|4|17|0|100|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|100|0|8|9|100|bool|true
9|0=25|4|17|0|100|0|4|30|0|Sword
9|0=25|4|17|0|104|0|4|17|9|100|1|4|30|0|, <>
9|0=25|4|17|0|104|0|8|9|100|bool|true
9|0=25|4|17|0|104|0|4|30|0|Water Dash
9|0=25|4|17|9|100|0|4|30|0|None
3|1|16|0|0|2|Wisp Progress
3|1|16|1|0|2|[Ability1]View Progress
3|1|16|2|0|2|file:assets\icons\wheel\wisps_progress.png
3|1|16|4|0|2|0|8|9|0|int|39
9|0=39|8|9|0|int|26
9|0=39|6|${1}|instant
9|0=26|8|9|100|bool|false
9|0=26|4|29|1|#Wisps found#: <>
9|0=26|4|17|46462|59806|1|8|9|100|bool|true
9|0=26|4|17|46462|59806|1|4|30|1|Voice
9|0=26|4|17|28895|25522|1|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|28895|25522|1|8|9|100|bool|true
9|0=26|4|17|28895|25522|1|4|30|1|Memory
9|0=26|4|17|18793|63291|1|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|18793|63291|1|8|9|100|bool|true
9|0=26|4|17|18793|63291|1|4|30|1|Eyes
9|0=26|4|17|945|49747|1|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|945|49747|1|8|9|100|bool|true
9|0=26|4|17|945|49747|1|4|30|1|Strength
9|0=26|4|17|10289|22102|1|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|10289|22102|1|8|9|100|bool|true
9|0=26|4|17|10289|22102|1|4|30|1|Heart
9|0=26|4|17|9|100|0|4|30|1|None
9|0=26|8|9|100|bool|false
9|0=26|4|30|1|\n#Wisps remaining#: <>
9|0=26|4|17|46462|59806|0|8|9|100|bool|true
9|0=26|4|17|46462|59806|0|4|30|1|Voice
9|0=26|4|17|28895|25522|0|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|28895|25522|0|8|9|100|bool|true
9|0=26|4|17|28895|25522|0|4|30|1|Memory
9|0=26|4|17|18793|63291|0|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|18793|63291|0|8|9|100|bool|true
9|0=26|4|17|18793|63291|0|4|30|1|Eyes
9|0=26|4|17|945|49747|0|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|945|49747|0|8|9|100|bool|true
9|0=26|4|17|945|49747|0|4|30|1|Strength
9|0=26|4|17|10289|22102|0|4|17|9|100|1|4|30|1|, <>
9|0=26|4|17|10289|22102|0|8|9|100|bool|true
9|0=26|4|17|10289|22102|0|4|30|1|Heart
9|0=26|4|17|9|100|0|4|30|1|None
3|2|8|9|0|int|25
3|2|8|9|0|int|26
3|2|6|${0}\n${1}|instant
3|1|16|0|0|3|Quest Progress
3|1|16|1|0|3|[Ability1]View Progress
3|1|16|2|0|3|file:assets\icons\wheel\quests_progress.blue.png
3|1|16|4|0|3|0|8|9|0|int|27
3|3|8|9|0|int|27
9|0=27|4|29|0|
9|0=27|4|17|937|34641|0|4|30|0|#Silent Teeth# - Meet Kwolok\n
9|0=27|4|17|937|34641|1|4|30|0|#Silent Teeth# - Restart the Mill\n
9|0=27|4|17|937|34641|2|4|30|0|#Silent Teeth# - Search the Mill\n
9|0=27|4|17|937|34641|3|4|30|0|#Silent Teeth# - Return to Kwolok\n
9|0=27|4|17|937|34641|4|4|30|0|#Silent Teeth# - $Complete$\n
9|0=27|4|17|14019|35399|0|4|30|0|#Shifting Sands# - Find the Heart of the Forest\n
9|0=27|4|17|14019|35399|1|4|30|0|#Shifting Sands# - Find the Heart of the Forest\n
9|0=27|4|17|14019|35399|2|4|30|0|#Shifting Sands# - Gather the Four Wisps\n
9|0=27|4|17|14019|35399|3|4|30|0|#Shifting Sands# - $Complete$\n
9|0=27|4|17|14019|35087|0|4|30|0|#Lost Paradise# - Find the Strength of the Forest\n
9|0=27|4|17|14019|35087|1|4|30|0|#Lost Paradise# - Find the Strength of the Forest\n
9|0=27|4|17|14019|35087|2|4|30|0|#Lost Paradise# - Defeat Kwolok\n
9|0=27|4|17|14019|35087|3|4|30|0|#Lost Paradise# - $Complete$\n
9|0=27|4|17|14019|45931|0|4|30|0|#Breaking Mould# - Find the Eyes of the Forest\n
9|0=27|4|17|14019|45931|1|4|30|0|#Breaking Mould# - Find the Eyes of the Forest\n
9|0=27|4|17|14019|45931|2|4|30|0|#Breaking Mould# - Defeat Mora\n
9|0=27|4|17|14019|45931|3|4|30|0|#Breaking Mould# - $Complete$\n
9|0=27|4|17|14019|8973|0|4|30|0|#Highest Reach# - Find the Memory of the Forest\n
9|0=27|4|17|14019|8973|1|4|30|0|#Highest Reach# - Find the Memory of the Forest\n
9|0=27|4|17|14019|8973|2|4|30|0|#Highest Reach# - Wake Baur\n
9|0=27|4|17|14019|8973|3|4|30|0|#Highest Reach# - $Complete$\n
9|0=27|4|17|48248|51645|0|4|30|0|#Missing Key# - Meet Tokk in a Cave\n
9|0=27|4|17|48248|51645|1|4|30|0|#Missing Key# - Find the Keystone\n
9|0=27|4|17|48248|51645|2|4|30|0|#Missing Key# - Show the Keystone to Tokk\n
9|0=27|4|17|48248|51645|3|4|30|0|#Missing Key# - $Complete$\n
9|0=27|4|17|48248|18458|0|4|30|0|#Into Burrows# - Meet Tokk above the Midnight Burrows\n
9|0=27|4|17|48248|18458|1|4|30|0|#Into Burrows# - Find the artifact in the Midnight Burrows\n
9|0=27|4|17|48248|18458|2|4|30|0|#Into Burrows# - Find the artifact in the Midnight Burrows\n
9|0=27|4|17|48248|18458|3|4|30|0|#Into Burrows# - Return to Tokk\n
9|0=27|4|17|48248|18458|4|4|30|0|#Into Burrows# - $Complete$\n
9|0=27|4|17|14019|20667|0|4|30|0|#Lost Compass# - Meet Tokk at the Wellspring\n
9|0=27|4|17|14019|20667|1|4|30|0|#Lost Compass# - Find Tokk's Compass\n
9|0=27|4|17|14019|20667|2|4|30|0|#Lost Compass# - Return the iron needle to Tokk\n
9|0=27|4|17|14019|20667|3|4|30|0|#Lost Compass# - $Complete$\n
9|0=27|4|17|14019|15983|0|4|30|0|#Little Braver# - Meet Mokk the Brave near where you fought Howl\n
9|0=27|4|17|14019|15983|1|4|30|0|#Little Braver# - Find a Howl fang near where you fought Howl\n
9|0=27|4|17|14019|15983|2|4|30|0|#Little Braver# - Give the Howl fang to Mokk the Brave\n
9|0=27|4|17|14019|15983|3|4|30|0|#Little Braver# - $Complete$\n
9|0=27|4|17|14019|27804|0|4|30|0|#Family Reunion# - Meet a father Moki in the Wellspring Glades\n
9|0=27|4|17|14019|27804|1|4|30|0|#Family Reunion# - Talk to Grom about building a home\n
9|0=27|4|17|14019|27804|2|4|30|0|#Family Reunion# - Find the Moki family near the Silent Woods\n
9|0=27|4|17|14019|27804|3|4|30|0|#Family Reunion# - Return to the Moki father with the bad news\n
9|0=27|4|17|14019|27804|4|4|30|0|#Family Reunion# - @Complete@\n
9|0=27|4|17|14019|59708|0|4|30|0|#Tree Keeper# - Meet the Tree Keeper in the Silent Woods\n
9|0=27|4|17|14019|59708|1|4|30|0|#Tree Keeper# - Find someone who knows a lot about plants\n
9|0=27|4|17|14019|59708|2|4|30|0|#Tree Keeper# - Bring the Tree Keeper the bad news\n
9|0=27|4|17|14019|59708|3|4|30|0|#Tree Keeper# - $Complete$\n
9|0=27|4|17|14019|61011|0|4|30|0|#Rough Diamond# - Explore the Windswept Wastes near the Shovel\n
9|0=27|4|17|14019|61011|1|4|30|0|#Rough Diamond# - Explore the Windswept Wastes near the Shovel\n
9|0=27|4|17|14019|61011|2|4|30|0|#Rough Diamond# - Find a use for the metal cog\n
9|0=27|4|17|14019|61011|3|4|30|0|#Rough Diamond# - Go treasure hunting in the Gorlek Mines\n
9|0=27|4|17|14019|61011|4|4|30|0|#Rough Diamond# - Take the eerie gem to a specialist (Twillen)\n
9|0=27|4|17|14019|61011|5|4|30|0|#Rough Diamond# - $Complete$\n
9|0=27|4|17|14019|26318|0|4|30|0|#Hand to Hand# - Meet a Moki near where you fought Hornbeetle\n
9|0=27|4|17|14019|26318|1|4|30|0|#Hand to Hand# - Find a wanderer with an interest in maps (Tokk)\n
9|0=27|4|17|14019|26318|2|4|30|0|#Hand to Hand# - Find an aspiring adventurer who might need a small bag (Moki in Wellspring)\n
9|0=27|4|17|14019|26318|3|4|30|0|#Hand to Hand# - Find someone who might have a use for herbs (Veral in Glades)\n
9|0=27|4|17|14019|26318|4|4|30|0|#Hand to Hand# - Find someone in need of a warm meal (Moki in Reach)\n
9|0=27|4|17|14019|26318|5|4|30|0|#Hand to Hand# - Find someone who needs a hat (Moki in Glades)\n
9|0=27|4|17|14019|26318|6|4|30|0|#Hand to Hand# - Find someone in need of light (Moki in Depths)\n
9|0=27|4|17|14019|26318|7|4|30|0|#Hand to Hand# - Find someone who needs string (Moki in Pools)\n
9|0=27|4|17|14019|26318|8|4|30|0|#Hand to Hand# - Find someone who needs a spyglass (Motay in Glades)\n
9|0=27|4|17|14019|26318|9|4|30|0|#Hand to Hand# - Find someone in need of drinking water (Gorlek Miner in Wastes)\n
9|0=27|4|17|14019|26318|10|4|30|0|#Hand to Hand# - Find the ancient Map Stone\n
9|0=27|4|17|14019|26318|11|4|30|0|#Hand to Hand# - $Complete$\n
9|0=27|4|17|14019|33776|0|4|30|0|#Into Darkness# - Meet the Moki in front of a cave in Glades\n
9|0=27|4|17|14019|33776|1|4|30|0|#Into Darkness# - Find a way into the Cave to retrieve the Moki's keepsake\n
9|0=27|4|17|14019|33776|2|4|30|0|#Into Darkness# - Return the acorn to the Moki\n
9|0=27|4|17|14019|33776|3|4|30|0|#Into Darkness# - $Complete$\n
9|0=27|4|17|14019|50597|0|4|30|0|#Kwolok's Wisdom# - Meet a Moki in Luma Pools\n
9|0=27|4|17|14019|50597|1|4|30|0|#Kwolok's Wisdom# - Find Kwolok and report back\n
9|0=27|4|17|14019|50597|2|4|30|0|#Kwolok's Wisdom# - Give the Amulet to Kwolok\n
9|0=27|4|17|14019|50597|3|4|30|0|#Kwolok's Wisdom# - Take the Amulet to Kwolok's Altar\n
9|0=27|4|17|14019|50597|4|4|30|0|#Kwolok's Wisdom# - $Complete$\n
9|0=27|4|17|14019|44578|0|4|30|0|#Rebuilding the Glades# - Help Grom rebuild the Wellspring Glades\n
9|0=27|4|17|14019|44578|1|4|30|0|#Rebuilding the Glades# - Help Grom rebuild the Wellspring Glades\n
9|0=27|4|17|14019|44578|2|4|30|0|#Rebuilding the Glades# - $Complete$\n
9|0=27|4|17|14019|26394|0|4|30|0|#Regrowing the Glades# - Help Tuley regrow the flora of the Wellspring Glades\n
9|0=27|4|17|14019|26394|1|4|30|0|#Regrowing the Glades# - Help Tuley regrow the flora of the Wellspring Glades\n
9|0=27|4|17|14019|26394|2|4|30|0|#Regrowing the Glades# - $Complete$\n
9|0=27|6|<ls_0.7><s_0.95>${0}<\><\>|instant
3|1|16|0|0|4|Teleporter Progress
3|1|16|1|0|4|[Ability1]View Progress
3|1|16|2|0|4|file:assets\icons\game\teleporter.png
3|1|16|4|0|4|0|8|9|0|int|29
3|4|8|9|0|int|29
9|0=29|8|9|100|bool|false
9|0=29|4|29|0|#Teleporters activated#: <>
9|0=29|4|17|21786|10185|1|8|9|100|bool|true
9|0=29|4|17|21786|10185|1|4|30|0|Inkwater Marsh
9|0=29|4|17|11666|61594|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|11666|61594|1|8|9|100|bool|true
9|0=29|4|17|11666|61594|1|4|30|0|Howl's Den
9|0=29|4|17|937|26601|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|937|26601|1|8|9|100|bool|true
9|0=29|4|17|937|26601|1|4|30|0|Kwolok's Hollow
9|0=29|4|17|42178|42096|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|42178|42096|1|8|9|100|bool|true
9|0=29|4|17|42178|42096|1|4|30|0|Glades
9|0=29|4|17|53632|18181|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|53632|18181|1|8|9|100|bool|true
9|0=29|4|17|53632|18181|1|4|30|0|Wellspring
9|0=29|4|17|24922|42531|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|24922|42531|1|8|9|100|bool|true
9|0=29|4|17|24922|42531|1|4|30|0|Midnight Burrows
9|0=29|4|17|58674|7071|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|58674|7071|1|8|9|100|bool|true
9|0=29|4|17|58674|7071|1|4|30|0|Woods Entrance
9|0=29|4|17|58674|1965|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|58674|1965|1|8|9|100|bool|true
9|0=29|4|17|58674|1965|1|4|30|0|Woods Exit
9|0=29|4|17|28895|54235|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|28895|54235|1|8|9|100|bool|true
9|0=29|4|17|28895|54235|1|4|30|0|Baur's Reach
9|0=29|4|17|18793|38871|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|18793|38871|1|8|9|100|bool|true
9|0=29|4|17|18793|38871|1|4|30|0|Mouldwood Depths
9|0=29|4|17|945|58183|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|945|58183|1|8|9|100|bool|true
9|0=29|4|17|945|58183|1|4|30|0|Central Luma
9|0=29|4|17|945|1370|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|945|1370|1|8|9|100|bool|true
9|0=29|4|17|945|1370|1|4|30|0|Luma Boss
9|0=29|4|17|58674|10029|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|58674|10029|1|8|9|100|bool|true
9|0=29|4|17|58674|10029|1|4|30|0|Feeding Grounds
9|0=29|4|17|20120|49994|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|20120|49994|1|8|9|100|bool|true
9|0=29|4|17|20120|49994|1|4|30|0|Central Wastes
9|0=29|4|17|20120|41398|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|20120|41398|1|8|9|100|bool|true
9|0=29|4|17|20120|41398|1|4|30|0|Outer Ruins
9|0=29|4|17|10289|4928|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|10289|4928|1|8|9|100|bool|true
9|0=29|4|17|10289|4928|1|4|30|0|Inner Ruins
9|0=29|4|17|16155|41465|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|16155|41465|1|8|9|100|bool|true
9|0=29|4|17|16155|41465|1|4|30|0|Willow's End
9|0=29|4|17|16155|50867|1|4|17|9|100|1|4|30|0|, <>
9|0=29|4|17|16155|50867|1|8|9|100|bool|true
9|0=29|4|17|16155|50867|1|4|30|0|Shriek
9|0=29|4|17|9|100|0|4|30|0|None
9|0=29|6|${0}|instant
3|0|4|19|14019|59708|1|8|14019|59708|int|1 // Quest Autoadvance
3|0|4|19|14019|59708|2|8|14019|59708|int|2
42178|33011=1|4|17|6|300|1|8|42178|33011|byte|3
42178|64583=1|4|17|6|300|1|8|42178|64583|byte|3
42178|38393=1|4|17|6|300|1|8|42178|38393|byte|3
42178|47651=1|4|17|6|300|1|8|42178|47651|byte|3
42178|16254=1|4|17|6|300|1|8|42178|16254|byte|3
42178|40006=1|4|17|6|300|1|8|42178|40006|byte|3
6|300=1|4|17|42178|33011|1|8|42178|33011|byte|3
6|300=1|4|17|42178|64583|1|8|42178|64583|byte|3
6|300=1|4|17|42178|38393|1|8|42178|38393|byte|3
6|300=1|4|17|42178|47651|1|8|42178|47651|byte|3
6|300=1|4|17|42178|16254|1|8|42178|16254|byte|3
6|300=1|4|17|42178|40006|1|8|42178|40006|byte|3
42178|33011=3|4|17|6|300|1|8|9|0|int|40
42178|64583=3|4|17|6|300|1|8|9|0|int|40
42178|38393=3|4|17|6|300|1|8|9|0|int|40
42178|47651=3|4|17|6|300|1|8|9|0|int|40
42178|16254=3|4|17|6|300|1|8|9|0|int|40
42178|40006=3|4|17|6|300|1|8|9|0|int|40
9|0=40|4|17|14019|26394|0|8|14019|26394|int|1
9|0=40|4|17|42178|33011|3|4|17|42178|64583|3|4|17|42178|38393|3|4|17|42178|47651|3|4|17|42178|16254|3|4|17|42178|40006|3|8|14019|26394|int|2
14019|35087=3|4|17|14019|50597|2|8|14019|50597|int|3
)WOTWR";
        },
    };
}
