#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/core.h>
#include <Modloader/modloader.h>
#include <regex>

namespace randomizer::archipelago {
    std::string sanitize_text(const std::string& text) {
        const std::regex markup(R"(\$|#|@|\*|<|>)");
        std::string new_text = std::regex_replace(text, markup, "");  // TODO use replacement characters instead of removing them
        return new_text;
    }

    // Open doors and refund keystones
    void reset_ks_doors() {
        const auto& keystone = core::api::game::player::keystones();
        struct KSDoorData {
            int group;
            int state;
            int cost;
        };

        static const std::vector KS_DOORS = {
            KSDoorData{21786, 42309, 2},  // MarshSpawn.KeystoneDoor
            KSDoorData{21786, 47445, 2},  // HowlsDen.KeystoneDoor
            KSDoorData{937, 64003, 2},  // MarshPastOpher.EyestoneDoor
            KSDoorData{18793, 3171, 4},  // MidnightBurrows.KeystoneDoor
            KSDoorData{58674, 21500, 2},  // WoodsEntry.KeystoneDoor
            KSDoorData{18793, 41544, 4},  // WoodsMain.KeystoneDoor
            KSDoorData{28895, 4290, 4},  // LowerReach.KeystoneDoor
            KSDoorData{28895, 49900, 4},  // UpperReach.KeystoneDoor
            KSDoorData{18793, 10758, 2},  // UpperDepths.CentralKeystoneDoor
            KSDoorData{21786, 59990, 2},  // UpperDepths.EntryKeystoneDoor
            KSDoorData{5377, 47621, 4},  // UpperPools.KeystoneDoor
            KSDoorData{20120, 28786, 2},  // UpperWastes.KeystoneDoor
        };

        for (const auto& [group, state, cost] : KS_DOORS) {
            const auto& door_uber = core::api::uber_states::UberState(group, state);
            if (door_uber.get()) {
                door_uber.set(false);
                keystone.set(keystone.get() + cost);
            }
        }
        core::message_controller().queue_central({
            .text = core::Property<std::string>("Keystone doors got reset"),
            .show_box = true,
        });
        modloader::info("archipelago", "Keystone doors got reset upon request by the player.");
    }
}
