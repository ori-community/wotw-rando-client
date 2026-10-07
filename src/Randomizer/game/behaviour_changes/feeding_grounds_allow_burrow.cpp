#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/SeinAbilityRestrictZone.h>
#include <Modloader/app/types/SeinAbilityRestrictZone.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>


using namespace app::classes;

namespace {
    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("petrifiedOwlFeedingGroundsRevised", [](const auto& event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);
        const auto ability_restrict_zone_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{"setups", "petrifiedOwlFeedingGroundsSetup", "chaseSequenceSetup", "startledRestrictionZone", "restrictAbilityZone"}
        );

        if (il2cpp::unity::is_valid(ability_restrict_zone_go)) {
            auto restrict_zone = il2cpp::unity::get_component<app::SeinAbilityRestrictZone>(
                ability_restrict_zone_go, types::SeinAbilityRestrictZone::get_class()
            );
            auto mask = static_cast<int>(restrict_zone->fields.RestrictMask);
            mask = mask & ~static_cast<int>(app::SeinAbilityRestrictZoneMask__Enum::Dash);
            restrict_zone->fields.RestrictMask = static_cast<app::SeinAbilityRestrictZoneMask__Enum>(mask);
        }
    });
} // namespace
