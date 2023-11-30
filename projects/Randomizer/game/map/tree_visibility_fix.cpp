#include <Core/api/uber_states/uber_state.h>
#include <Core/mood_guid.h>

#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>
#include <Modloader/interception_macros.h>

namespace randomizer::game::map {
    namespace {
        const std::unordered_map<core::MoodGuid, core::api::uber_states::UberState> TREE_OVERRIDES = {
            {{0x64590ed6, 0x476b6885, -0x766c444d, 0x7d01ee6d}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DoubleJump)},
            {{0x2093882f, 0x41284e46, 0x284565b7, 0x3b59fe87}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::MeditateSpell)},
            {{0x409f9b9c, 0x4875095f, 0x605e3d99, -0x786c5459}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeB)},
            {{-0x4eb59a75, 0x47ae6c64, -0x3aba1b60, 0x5ec56dc1}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DashNew)},
            {{-0x65c45e3c, 0x44f761c3, 0x3e220da0, 0x5df0873f}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bash)},
            {{0x0301d83a, 0x4bf5928c, -0xa229b71, -0x3129ea9f}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::WaterDash)},
            {{0x7e686e64, 0x4fdc6a7a, -0x73abac7f, -0x3d816e30}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::GlowSpell)},
            {{-0x3b9ce402, 0x4805c6ee, -0x32102e61, -0x65301928}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::ChargeJump)},
            {{-0x6c8da796, 0x48214636, -0x63a8ab73, 0x182b410d}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::SpiritLeash)},
            {{-0x1f125a7c, 0x48cbb5c7, -0x346eb455, -0x596c7bc}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeA)},
            {{0x1c2f12f9, 0x4b5ac685, -0x064295c, -0x341995b8}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Digging)},
            {{0x1f79d15a, 0x4192137e, -0x5bf2f362, 0x3e289606}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Grenade)},
            {{0x718c895b, 0x431b8c79, -0x23f105b, -0x5f8f6079}, core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bow)},
            // Sword Tree has no icon in the base game, we add that manually
        };

        void resolve_icons(app::RuntimeGameWorldArea* area) {
            for (auto item: il2cpp::ListIterator(area->fields.Icons)) {
                if (item->fields.Icon == app::WorldMapIconType__Enum::AbilityPedestal) {
                    auto it = TREE_OVERRIDES.find(item->fields.Guid);
                    if (it != TREE_OVERRIDES.end()) {
                        item->fields.Condition = nullptr;
                        item->fields.IsCollectedState = it->second.ptr<app::SerializedBooleanUberState>();
                    }
                }
            }
        }

        std::unordered_map<app::GameWorldAreaID__Enum, app::RuntimeGameWorldArea*> areas;
        IL2CPP_INTERCEPT(RuntimeGameWorldArea, void, ctor, (app::RuntimeGameWorldArea * this_ptr, app::GameWorldArea* area)) {
            next::RuntimeGameWorldArea::ctor(this_ptr, area);
            areas[area->fields.WorldMapAreaUniqueID] = this_ptr;
            resolve_icons(this_ptr);
        }
    } // namespace
} // namespace randomizer::game::map
