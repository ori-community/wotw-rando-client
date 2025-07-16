#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/BaurEntity.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/app/types/SeinAbilityRestrictZone.h>
#include <Modloader/interception_macros.h>


namespace {

    const std::unordered_map<app::AbilityType__Enum, core::api::uber_states::UberState> ability_should_open{
        {app::AbilityType__Enum::Blaze,     core::api::uber_states::UberState(7, 420)},
        {app::AbilityType__Enum::GlowSpell, core::api::uber_states::UberState(7, 421)},
    };

    IL2CPP_INTERCEPT(BaurEntity, void, ResolveDamage, (app::BaurEntity * this_ptr, app::DamageResult result)) {
        const auto should_open = ability_should_open.contains(result.Damage->fields.m_abilityType) &&
            ability_should_open.at(result.Damage->fields.m_abilityType).get<bool>();

        if (should_open) {
            result.Damage->fields.m_damageType = app::DamageType__Enum::Wind;
        }
        next::BaurEntity::ResolveDamage(this_ptr, result);
    }

    std::optional<il2cpp::WeakGCRef<app::SeinAbilityRestrictZone>> restrict_zone;
    std::shared_ptr<const core::reactivity::ReactiveEffect> restrict_zone_effect;

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "baurSetupScene") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto ability_restrict_zone_go = il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"interactives", "baurSetup", "attackRestrictZone"}
            );

            if (il2cpp::unity::is_valid(ability_restrict_zone_go)) {
                restrict_zone = il2cpp::WeakGCRef(
                    il2cpp::unity::get_component<app::SeinAbilityRestrictZone>(ability_restrict_zone_go, types::SeinAbilityRestrictZone::get_class())
                );
                restrict_zone_effect = core::reactivity::watch_effect([] {
                    if (restrict_zone->is_valid()) {
                        auto mask = static_cast<int>((**restrict_zone)->fields.RestrictMask);
                        // Flash is not restricted by the Attack mask so it does not need to be handled
                        if (ability_should_open.at(app::AbilityType__Enum::Blaze).get<bool>()) {
                            mask = mask & ~static_cast<int>(app::SeinAbilityRestrictZoneMask__Enum::Attack);
                        }
                        (**restrict_zone)->fields.RestrictMask = static_cast<app::SeinAbilityRestrictZoneMask__Enum>(mask);
                    }
                });
            }
        }
    }


    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
} // namespace
