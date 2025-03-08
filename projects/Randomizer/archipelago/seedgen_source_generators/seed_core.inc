#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator seed_core = {
        []() -> std::string { return "seed_core"; },
        [](const ArchipelagoSeedGeneratorOptions&) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions&) -> std::optional<std::string> {
            return R"WOTWR(
// Seed Core
3|0|8|7|12|bool|true
3|0|8|6|402|bool|true
3|0|8|48248|16489|int|1
3|0|8|17|16825|bool|true
3|0|8|21|16825|bool|true
3|0|8|17|15068|bool|true
3|0|8|21|15068|bool|true
3|0|8|21786|47458|bool|true
3|0|8|937|54318|bool|true
3|0|8|9593|3621|bool|true
3|0|8|21786|50432|bool|true
3|0|8|58674|22056|bool|true
3|0|8|58674|32369|bool|true
3|0|8|58674|14539|bool|true
3|0|8|58674|61252|bool|true
3|0|8|58674|10677|bool|true
3|0|8|58674|36965|bool|true
3|0|8|58674|7636|bool|true
3|0|8|14019|8973|int|1
3|0|8|14019|35087|int|1
3|0|8|14019|35399|int|1
3|0|8|14019|45931|int|1
3|0|8|58674|46980|bool|true
3|0|8|58674|44798|int|2
3|0|8|14019|54675|int|2
3|0|8|14019|34504|int|4
3|0|8|14019|44500|int|4
3|0|8|21786|26462|bool|true
3|0|8|7|13|bool|true
3|0|8|7|14|bool|true
3|0|8|7|15|bool|true
3|0|8|7|16|bool|true
3|0|8|7|17|bool|true
3|0|8|7|18|bool|true
3|0|8|7|19|bool|true
9|0|8|9|0|int|0
3|1|17|0|17|16825|grom:0
3|1|17|1|17|16825|Repair the Spirit Well
3|1|17|2|17|16825|They say the spirit of old could #warp# from one well to another. Perhaps if we #repaired this well with Gorlek Ore#, returning to the #Wellspring Glades# would be even easier.
3|1|8|17|16826|int|1
17|16825|8|21|16825|bool|true
3|1|17|0|17|51230|grom:1
3|1|17|1|17|51230|Dwelling Repairs
3|1|17|2|17|51230|It's a shame how those old Moki dwellings are in shambles. Maybe if we #fixed them up# the Moki could #move back to the Glades#?
3|1|8|17|51231|int|4
17|51230|8|21|51230|bool|true
3|1|17|0|17|23607|grom:3
3|1|17|1|17|23607|Roofs Over Heads
3|1|17|2|17|23607|Time to #build some more housing#! Now on the big tree, by the fire.
3|1|4|17|17|51230|0|17|4|17|23607|false
17|51230|17|4|17|23607|true
3|1|8|17|23608|int|6
17|23607|8|21|23607|bool|true
3|1|17|0|17|40448|grom:5
3|1|17|1|17|40448|Onwards and Upwards
3|1|17|2|17|40448|Treehouses seem to be popular with the Moki. How about we add a couple more?
3|1|4|17|17|23607|0|17|4|17|40448|false
17|23607|17|4|17|40448|true
3|1|8|17|40449|int|8
17|40448|8|21|40448|bool|true
3|1|17|0|17|18751|grom:2
3|1|17|1|17|18751|Thorny Situation
3|1|17|2|17|18751|Those spikey vines all over the place are quite the nuisance, let me tell you. With some help, I could #clear them out# and #make the Glades safer# for everyone!
3|1|8|17|18752|int|5
17|18751|8|21|18751|bool|true
3|1|17|0|17|16586|grom:4
3|1|17|1|17|16586|Clear the Cave Entrance
3|1|17|2|17|16586|That old cave entrance looks like it's #about to collapse#...but we Gorlek learned a thing or two about tunnelling after fleeing to the mines. With some Ore, I can #repair# it.
3|1|4|17|17|18751|0|17|4|17|16586|false
17|18751|17|4|17|16586|true
17|18751|4|17|14019|33776|0|8|14019|33776|byte|1
3|1|8|17|16587|int|6
17|16586|8|21|16586|bool|true
3|1|17|0|17|15068|grom:6
3|1|17|1|17|15068|The Gorlek Touch
3|1|17|2|17|15068|The Moki are right...building it only half the work. Nothing's quite complete without some #finishing touches# of decoration.
3|1|8|17|15069|int|10
17|15068|8|21|15068|bool|true
3|1|17|0|20|16254|tuley:0
3|1|17|1|20|16254|Wellspring Wildflowers
3|1|17|2|20|16254|I could never quite get #Sela flowers# to prosper in my old garden. Perhaps they'll do better here?
3|1|4|17|14019|20601|0|17|4|20|16254|false
14019|20601|17|4|20|16254|true
20|16254|8|21|16254|bool|false
3|1|17|0|20|64583|tuley:1
3|1|17|1|20|64583|Sticky Situation
3|1|17|2|20|64583|I'm not surprised you found this seed so far away. Feel how sticky it is? Grass seeds hitch rides on passers-by to find fresh soil.
3|1|4|17|14019|28662|0|17|4|20|64583|false
14019|28662|17|4|20|64583|true
20|64583|8|21|64583|bool|false
3|1|17|0|20|47651|tuley:2
3|1|17|1|20|47651|Firemoth's Delight
3|1|17|2|20|47651|With the days growing darker since the #Decay#, Lightcatchers are finding it harder to collect the light they need for their hanging bulbs.
3|1|4|17|14019|8192|0|17|4|20|47651|false
14019|8192|17|4|20|47651|true
20|47651|8|21|47651|bool|false
3|1|17|0|20|33011|tuley:3
3|1|17|1|20|33011|Blue Moon
3|1|17|2|20|33011|Unlike their cousins, the #Lightcatchers#, these hanging flowers draw energy from the light of the #moon#, not the sun.
3|1|4|17|14019|24142|0|17|4|20|33011|false
14019|24142|17|4|20|33011|true
20|33011|8|21|33011|bool|false
3|1|17|0|20|38393|tuley:4
3|1|17|1|20|38393|Left Behind
3|1|17|2|20|38393|I thought I saved every seed, but it seems on was left behind in the cold, and survived against all odds.
3|1|4|17|14019|32376|0|17|4|20|38393|false
14019|32376|17|4|20|38393|true
20|38393|8|21|38393|bool|false
3|1|17|0|20|40006|tuley:5
3|1|17|1|20|40006|The Last Seed
3|1|17|2|20|40006|I recognize this seed. It seems the tree I couldn't save is not completely gone.
3|1|4|17|14019|7470|0|17|4|20|40006|false
14019|7470|17|4|20|40006|true
20|40006|8|21|40006|bool|false
0|100|8|6|401|bool|true
14019|27804=2|4|17|14019|57399|1|8|14019|27804|int|3
14019|27804>2|4|17|6|500|0|4|17|21|51230|1|8|14019|27804|int|1
14019|27804>2|4|17|6|500|0|4|17|21|51230|0|8|14019|27804|int|0
)WOTWR";
        },
    };
}
