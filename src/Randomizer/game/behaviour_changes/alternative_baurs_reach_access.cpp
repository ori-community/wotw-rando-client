#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/BaurEntity.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/app/types/SeinAbilityRestrictZone.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    bool should_open(const app::AbilityType__Enum ability_type) {
        switch (ability_type) {
            case app::AbilityType__Enum::Blaze:
                return randomizer::uber_states::state<"randoConfig", "baurSneezeWithBlaze">().get();
            case app::AbilityType__Enum::GlowSpell:
                return randomizer::uber_states::state<"randoConfig", "baurSneezeWithFlash">().get();
            default:
                return false;
        }
    }

    IL2CPP_INTERCEPT(void, BaurEntity, ResolveDamage, app::BaurEntity * this_ptr, app::DamageResult result) {
        if (should_open(result.Damage->fields.m_abilityType)) {
            result.Damage->fields.m_damageType = app::DamageType__Enum::Wind;
        }

        next::BaurEntity::ResolveDamage(this_ptr, result);
    }

    std::optional<il2cpp::WeakGCRef<app::SeinAbilityRestrictZone>> restrict_zone_ref;
    core::reactivity::ReactiveEffect::ptr_t restrict_zone_effect;

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "baurSetupScene",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            const auto ability_restrict_zone_go = il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"interactives", "baurSetup", "attackRestrictZone"}
            );

            if (il2cpp::unity::is_valid(ability_restrict_zone_go)) {
                restrict_zone_ref = il2cpp::WeakGCRef(
                    il2cpp::unity::get_component<app::SeinAbilityRestrictZone>(ability_restrict_zone_go, types::SeinAbilityRestrictZone::get_class())
                );

                restrict_zone_effect = core::reactivity::watch_effect([] {
                    if (
                        const auto restrict_zone = restrict_zone_ref.and_then([](auto& ref) { return *ref; });
                        restrict_zone.has_value()
                    ) {
                        auto mask = static_cast<int>((*restrict_zone)->fields.RestrictMask);
                        // Flash is not restricted by the Attack mask so it does not need to be handled
                        if (should_open(app::AbilityType__Enum::Blaze)) {
                            mask = mask & ~static_cast<int>(app::SeinAbilityRestrictZoneMask__Enum::Attack);
                        }
                        (*restrict_zone)->fields.RestrictMask = static_cast<app::SeinAbilityRestrictZoneMask__Enum>(mask);
                    } else {
                        restrict_zone_ref = std::nullopt;
                        restrict_zone_effect = nullptr;
                    }
                });
            }
        }
    );
} // namespace
