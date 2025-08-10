#include <Core/api/graphics/sprite.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/InstantiateUtility.h>
#include <Modloader/app/methods/SeinFeatherFlap.h>
#include <Modloader/app/methods/WindCollision.h>
#include <Modloader/app/types/Collider.h>
#include <Modloader/app/types/DamageReceiver.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
namespace {
    using namespace app::classes;

    core::api::uber_states::UberState flap_damage_state(UberStateGroup::RandoUpgrade, 96);
    auto is_performing_wind_knockback = false;
    auto is_spawning_wind_fx = false;
    auto damage_amount_cache = 0.f;

    IL2CPP_INTERCEPT_WITH_ORDER(0, void, Damage, ctor, app::Damage* this_ptr, float amount, app::Vector2 force, app::Vector3 position, app::DamageType__Enum type, app::AbilityType__Enum ability_type, app::GameObject* sender, int32_t damage_i_d, app::DamageOwner* owner, app::SpiritShardType__Enum shard_type, bool ignore_kickback, app::DamageWeight__Enum weight, float speed_transfer, bool bypass_players_invincibility) {
        if (damage_amount_cache != 0.f) {
            amount = flap_damage_state.get<float>();
        }

        next::Damage::ctor(this_ptr, amount, force, position, type, ability_type, sender, damage_i_d, owner, shard_type, ignore_kickback, weight, speed_transfer, bypass_players_invincibility);

        if (damage_amount_cache != 0.f) {
            this_ptr->fields.TickRate = 8.f;
            this_ptr->fields.m_stunDuration = 2.f;
            this_ptr->fields.NumberOfTicks = 3;
        }
    }

    void apply_shader_info(app::GameObject* parent, const std::vector<std::vector<std::string_view>>& paths, const core::api::graphics::shaders::ShaderInfo& shader_info) {
        for (const auto& path: paths) {
            const auto game_objects = il2cpp::unity::find_children(parent, path);

            for (const auto & game_object: game_objects) {
                const auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(game_object, types::Renderer::get_class(), true);
                for (const auto& renderer: renderers) {
                    core::api::graphics::shaders::apply(renderer, shader_info);
                }
            }
        }
    }

    IL2CPP_INTERCEPT(app::GameObject*, InstantiateUtility, InstantiateImmediate_4, app::GameObject* original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record) {
        const auto instance = next::InstantiateUtility::InstantiateImmediate_4(original, position, rotation, owner, record);

        if (is_spawning_wind_fx) {
            core::api::graphics::shaders::ShaderInfo shader_info_extreme {
                .colors = {
                    {app::UberShaderProperty_Color__Enum::MainColor, app::Color(1.f, 1.f, 40.f, 10.f)},
                    {app::UberShaderProperty_Color__Enum::EmissivityColor, app::Color(0.3f, 0.3f, 40.f, 10.f)},
                    {app::UberShaderProperty_Color__Enum::LigthCanvasFrontLayerColor, app::Color(0.3f, 0.3f, 40.f, 10.f)},
                    {app::UberShaderProperty_Color__Enum::MultiplyLayerColor, app::Color(0.3f, 0.3f, 40.f, 10.f)},
                    {app::UberShaderProperty_Color__Enum::MultiplyLayerDistortColor, app::Color(0.3f, 0.3f, 40.f, 10.f)},
                    {app::UberShaderProperty_Color__Enum::AdditiveLayerColor, app::Color(0.3f, 0.3f, 40.f, 10.f)},
                    {app::UberShaderProperty_Color__Enum::EmissivityProps, app::Color(20.f, 20.f, 20.f, 20.f)},
                },
            };

            core::api::graphics::shaders::ShaderInfo shader_info_high {
                .colors = {
                    {app::UberShaderProperty_Color__Enum::MainColor, app::Color(1.f, 1.f, 4.f, 2.f)},
                    {app::UberShaderProperty_Color__Enum::EmissivityColor, app::Color(0.3f, 0.3f, 4.f, 2.f)},
                    {app::UberShaderProperty_Color__Enum::LigthCanvasFrontLayerColor, app::Color(0.3f, 0.3f, 4.f, 2.f)},
                    {app::UberShaderProperty_Color__Enum::MultiplyLayerColor, app::Color(0.3f, 0.3f, 2.f, 4.f)},
                    {app::UberShaderProperty_Color__Enum::MultiplyLayerDistortColor, app::Color(0.3f, 0.3f, 4.f, 2.f)},
                    {app::UberShaderProperty_Color__Enum::AdditiveLayerColor, app::Color(0.3f, 0.3f, 4.f, 2.f)},
                    {app::UberShaderProperty_Color__Enum::EmissivityProps, app::Color(1.f, 1.f, 1.f, 1.f)},
                },
            };

            core::api::graphics::shaders::ShaderInfo shader_info_default {
                .colors = {
                    {app::UberShaderProperty_Color__Enum::MainColor, app::Color(1.f, 1.f, 1.f, 1.f)},
                    {app::UberShaderProperty_Color__Enum::EmissivityColor, app::Color(1.f, 1.f, 1.f, 1.f)},
                    {app::UberShaderProperty_Color__Enum::LigthCanvasFrontLayerColor, app::Color(1.f, 1.f, 1.f, 1.f)},
                    {app::UberShaderProperty_Color__Enum::MultiplyLayerColor, app::Color(1.f, 1.f, 1.f, 1.f)},
                    {app::UberShaderProperty_Color__Enum::MultiplyLayerDistortColor, app::Color(1.f, 1.f, 1.f, 1.f)},
                    {app::UberShaderProperty_Color__Enum::AdditiveLayerColor, app::Color(1.f, 1.f, 1.f, 1.f)},
                    {app::UberShaderProperty_Color__Enum::EmissivityProps, app::Color(1.f, 1.f, 1.f, 1.f)},
                },
            };

            const std::vector<std::vector<std::string_view>> extreme_emission_paths = {
                {"windSequence", "graphicBox", "fxBox", "leadHalfSphere"},
                {"windSequence", "graphicBox", "fxBox", "cinderA"},
            };

            const std::vector<std::vector<std::string_view>> high_emission_paths = {
                {"windSequence", "graphicBox", "fxBox", "sharedBlowingSnow"},
                {"windSequence", "graphicBox", "wind", "sharedBlowingSnow"},
            };

            if (damage_amount_cache != 0.f) {
                apply_shader_info(instance, extreme_emission_paths, shader_info_extreme);
                apply_shader_info(instance, high_emission_paths, shader_info_high);
            } else {
                apply_shader_info(instance, extreme_emission_paths, shader_info_default);
                apply_shader_info(instance, high_emission_paths, shader_info_default);
            }
        }

        return instance;
    }

    IL2CPP_INTERCEPT(void, SeinFeatherFlap, SpawnWindFX, app::SeinFeatherFlap* this_ptr) {
        modloader::ScopedSetter _(is_spawning_wind_fx, true);
        damage_amount_cache = flap_damage_state.get<float>();
        next::SeinFeatherFlap::SpawnWindFX(this_ptr);
    }

    IL2CPP_INTERCEPT(void, WindCollision, PerformKnockback, app::WindCollision* this_ptr, app::GameObject* go, app::DamageOwner* damage_owner, app::AnimationCurve* distance_to_knockback) {
        modloader::ScopedSetter _(is_performing_wind_knockback, true);

        // Add all colliders of targeted entities so they don't receive double damage
        const auto damage_receiver = il2cpp::unity::get_component<app::DamageReceiver>(go, types::DamageReceiver::get_class());
        if (damage_receiver != nullptr) {
            app::GameObject* discovered_parent = nullptr;

            if (damage_receiver->fields.DamageOwner != nullptr) {
                discovered_parent = il2cpp::unity::get_game_object(damage_receiver->fields.DamageOwner);
            } else if (damage_receiver->fields.m_targetting != nullptr && damage_receiver->fields.m_targetting->fields.Entity != nullptr) {
                discovered_parent = il2cpp::unity::get_game_object(damage_receiver->fields.m_targetting->fields.Entity);
            }

            if (discovered_parent != nullptr) {
                auto owned_colliders = il2cpp::unity::get_components_in_children<app::Collider>(discovered_parent, types::Collider::get_class(), true);
                for (auto &owned_collider: owned_colliders) {
                    il2cpp::invoke(this_ptr->fields.m_alreadyAffectedColliders, "Add", owned_collider);
                }
            }
        }

        next::WindCollision::PerformKnockback(this_ptr, go, damage_owner, distance_to_knockback);
    }
} // namespace
