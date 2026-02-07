#include <Randomizer/features/wheel.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/archipelago/archipelago.h>

namespace randomizer::archipelago::wheel {
    void initialize_ap_wheel() {
        features::wheel::initialize_item(0, 9, "Archipelago Actions", "Contains archipelago options", "file:assets/icons/archipelago/ap-normal.blue.png",
        [](auto, auto, auto) {
            features::wheel::set_active_wheel(9100);
        });

        // Main AP wheel (9100)
        features::wheel::initialize_item(9100, 0, "Reset inventory", "Reset inventory\nin case it got desynced", "file:assets/icons/wheel/reload_seed.blue.png",
            [](auto, auto, auto) {
                archipelago_client().reset_inventory();
            });
        features::wheel::initialize_item(9100, 1, "Toggle deathlink", "Enable or disable deathlink", "file:assets/icons/wheel/force_exit.blue.png",
            [](auto, auto, auto) {
                archipelago_client().toggle_deathlink();
            });
        features::wheel::initialize_item(9100, 2, "Hint status", "Displays current hints\nand your hint points", "file:assets/icons/wheel/unlock_spoilers.blue.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("");
            });
        features::wheel::initialize_item(9100, 3, "Create a hint", "Select an item to hint", "file:assets/icons/wheel/quests_progress.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });

        // Menu wheel for hint (9101)
        features::wheel::initialize_item(9101, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9100);
            });
        features::wheel::initialize_item(9101, 0, "Skills (mobility)", "Select a movement skill to hint", "spell:2019",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9102);
            });
        features::wheel::initialize_item(9101, 1, "Skills (wheel)", "Select a skill from the wheel (except Launch)", "spell:1002",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9103);
            });
        features::wheel::initialize_item(9101, 2, "Teleporters (page 1)", "Select a teleporter (up until woods)", "file:assets/icons/game/teleporter.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9104);
            });
        features::wheel::initialize_item(9101, 3, "Teleporters (page 2)", "Select a teleporter (after woods)", "file:assets/icons/game/teleporter.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9105);
            });
        features::wheel::initialize_item(9101, 4, "Shards", "Select a collectible to hint", "shard:18",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9106);
            });
        features::wheel::initialize_item(9101, 5, "Collectibles", "Select a shard to hint", "file:assets/icons/game/gorlekore.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9107);
            });

        // Mobility skills wheel (9102)
        features::wheel::initialize_item(9102, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });
        features::wheel::initialize_item(9102, 0, "Double Jump", "", "spell:3004",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Double Jump");
            });
        features::wheel::initialize_item(9102, 1, "Dash", "", "spell:4000",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Dash");
            });
        features::wheel::initialize_item(9102, 2, "Bash", "", "spell:3000",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Bash");
            });
        features::wheel::initialize_item(9102, 3, "Grapple", "", "spell:3001",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Grapple");
            });
        features::wheel::initialize_item(9102, 4, "Clean Water", "", "file:assets/icons/game/water.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Clean Water");
            });
        features::wheel::initialize_item(9102, 5, "Water Breath", "", "opher:10",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Water Breath");
            });
        features::wheel::initialize_item(9102, 6, "Glide", "", "spell:4002",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Glide");
            });
        features::wheel::initialize_item(9102, 7, "Water Dash", "", "spell:4004",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Water Dash");
            });
        features::wheel::initialize_item(9102, 8, "Burrow", "", "spell:3002",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Burrow");
            });
        features::wheel::initialize_item(9102, 9, "Launch", "", "spell:2019",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Launch");
            });

        // Wheel skills (9103)
        features::wheel::initialize_item(9103, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });
        features::wheel::initialize_item(9103, 0, "Sword", "", "spell:1002",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Sword");
            });
        features::wheel::initialize_item(9103, 1, "Bow", "", "spell:1001",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Bow");
            });
        features::wheel::initialize_item(9103, 2, "Spear", "", "spell:2012",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Spear");
            });
        features::wheel::initialize_item(9103, 3, "Hammer", "", "spell:1000",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Hammer");
            });
        features::wheel::initialize_item(9103, 4, "Shuriken", "", "spell:2015",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Shuriken");
            });
        features::wheel::initialize_item(9103, 5, "Grenade", "", "spell:2010",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Grenade");
            });
        features::wheel::initialize_item(9103, 6, "Regenerate", "", "spell:2013",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Regenerate");
            });
        features::wheel::initialize_item(9103, 7, "Flap", "", "spell:3005",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Flap");
            });
        features::wheel::initialize_item(9103, 8, "Blaze", "", "spell:2016",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Blaze");
            });
        features::wheel::initialize_item(9103, 9, "Flash", "", "spell:2004",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Flash");
            });
        features::wheel::initialize_item(9103, 10, "Sentry", "", "spell:2011",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Sentry");
            });

        // Early teleporters (9104)
        features::wheel::initialize_item(9104, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });
        features::wheel::initialize_item(9104, 10, "Teleporters (page 2)", "Go to the other teleporter page", "file:assets/icons/game/teleporter.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9105);
            });
        features::wheel::initialize_item(9104, 0, "Inkwater Marsh TP", "", "spell:1003",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Inkwater Marsh TP");
            });
        features::wheel::initialize_item(9104, 1, "Howl's Den TP", "", "spell:3004",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Howl's Den TP");
            });
        features::wheel::initialize_item(9104, 2, "Midnight Burrows TP", "", "spell:4007",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Midnight Burrows TP");
            });
        features::wheel::initialize_item(9104, 3, "Kwolok's Hollow TP", "", "spell:3000",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Kwolok's Hollow TP");
            });
        features::wheel::initialize_item(9104, 4, "Glades TP", "", "grom:3",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Glades TP");
            });
        features::wheel::initialize_item(9104, 5, "Wellspring TP", "", "spell:3001",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Wellspring TP");
            });
        features::wheel::initialize_item(9104, 6, "Woods Entrance TP", "", "spell:4002",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Woods Entrance TP");
            });
        features::wheel::initialize_item(9104, 7, "Woods Exit TP", "", "spell:3005",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Woods Exit TP");
            });

        // Late teleporters (9105)
        features::wheel::initialize_item(9105, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });
        features::wheel::initialize_item(9105, 10, "Teleporters (page 1)", "Go to the other teleporter page", "file:assets/icons/game/teleporter.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9104);
            });
        features::wheel::initialize_item(9105, 0, "Baur's Reach TP", "", "spell:2010",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Baur's Reach TP");
            });
        features::wheel::initialize_item(9105, 1, "Mouldwood Depths TP", "", "spell:2004",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Mouldwood Depths TP");
            });
        features::wheel::initialize_item(9105, 2, "Central Luma TP", "", "file:assets/icons/game/water.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Central Luma TP");
            });
        features::wheel::initialize_item(9105, 3, "Luma Boss TP", "", "spell:4004",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Luma Boss TP");
            });
        features::wheel::initialize_item(9105, 4, "Feeding Grounds TP", "", "shard:3",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Feeding Grounds TP");
            });
        features::wheel::initialize_item(9105, 5, "Central Wastes TP", "", "spell:3002",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Central Wastes TP");
            });
        features::wheel::initialize_item(9105, 6, "Outer Ruins TP", "", "file:assets/icons/wheel/wisps_progress.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Outer Ruins TP");
            });
        features::wheel::initialize_item(9105, 7, "Inner Ruins TP", "", "spell:2018",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Inner Ruins TP");
            });
        features::wheel::initialize_item(9105, 8, "Willow's End TP", "", "spell:2019",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Willow's End TP");
            });
        features::wheel::initialize_item(9105, 9, "Shriek TP", "", "file:assets/icons/wheel/tree_progress.blue.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Shriek TP");
            });

        // Shards (9106)
        features::wheel::initialize_item(9106, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });
        features::wheel::initialize_item(9106, 0, "Triple Jump", "", "shard:2",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Triple Jump");
            });
        features::wheel::initialize_item(9106, 1, "Resilience", "", "shard:18",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Resilience");
            });
        features::wheel::initialize_item(9106, 2, "Life Pact", "", "shard:27",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Life Pact");
            });
        features::wheel::initialize_item(9106, 3, "Magnet", "", "shard:8",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Magnet");
            });
        features::wheel::initialize_item(9106, 4, "Deflector", "", "shard:44",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Deflector");
            });
        features::wheel::initialize_item(9106, 5, "Vitality", "", "shard:22",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Vitality");
            });
        features::wheel::initialize_item(9106, 6, "Energy (Shard)", "", "shard:26",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Energy (Shard)");
            });
        features::wheel::initialize_item(9106, 7, "Overcharge", "", "shard:1",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Overcharge");
            });
        features::wheel::initialize_item(9106, 8, "Swap", "", "shard:5",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Swap");
            });
        features::wheel::initialize_item(9106, 9, "Ultra Bash", "", "shard:32",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Ultra Bash");
            });
        features::wheel::initialize_item(9106, 10, "Ultra Grapple", "", "shard:33",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Ultra Grapple");
            });

        // Collectibles (9107)
        features::wheel::initialize_item(9107, 11, "Go back", "Return to the previous page", "file:assets/icons/wheel/menu.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9101);
            });
        features::wheel::initialize_item(9107, 0, "Health Fragment", "", "file:assets/icons/game/healthfragment.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Health Fragment");
            });
        features::wheel::initialize_item(9107, 1, "Energy Fragment", "", "file:assets/icons/game/energyfragment.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Energy Fragment");
            });
        features::wheel::initialize_item(9107, 2, "Gorlek Ore", "", "file:assets/icons/game/gorlekore.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Gorlek Ore");
            });
        features::wheel::initialize_item(9107, 3, "Keystone", "", "file:assets/icons/game/keystone.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Keystone");
            });
        features::wheel::initialize_item(9107, 4, "Shard Slot", "", "file:assets/icons/game/shardslot.png",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Shard Slot");
            });
        features::wheel::initialize_item(9107, 5, "Ancestral Light 1", "", "spell:4007",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Ancestral Light 1");
            });
        features::wheel::initialize_item(9107, 6, "Ancestral Light 2", "", "spell:4008",
            [](auto, auto, auto) {
                archipelago_client().hint_item("Ancestral Light 2");
            });
    }
}  // namespace archipelago::wheel