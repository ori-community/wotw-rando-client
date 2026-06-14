#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/SeinGrenadeAttack.h>
#include <Modloader/app/methods/SpiritGrenade.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/constants.h>
#include <Randomizer/macros.h>
#include <random>

#include <Core/api/uber_states/uber_state.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    constexpr bool SHOULD_EXPLODE_WHEN_GOING_OVER_LIMIT = true;
    constexpr float MAX_AIM_STRENGTH_TIME = 0.4f; // This is the default time.

    core::api::uber_states::UberState extra_grenades_state(UberStateGroup::RandoUpgrade, 40);
    core::api::uber_states::UberState explode_on_collision_state(UberStateGroup::RandoUpgrade, 41);
    core::api::uber_states::UberState uncharged_bash_grenades_state(UberStateGroup::RandoUpgrade, 42);
    core::api::uber_states::UberState charge_in_air_state(UberStateGroup::RandoUpgrade, 43);
    core::api::uber_states::UberState grenade_charge_time_state(UberStateGroup::RandoUpgrade, 44);
    core::api::uber_states::UberState grenade_multishot_state(UberStateGroup::RandoUpgrade, 45);

    constexpr float MULTI_GRENADE_OFFSET_MAGNITUDE = 2.0f;

    bool override_on_ground = false;
    bool is_charged = false;

    int count_grenades(app::SeinGrenadeAttack* this_ptr) {
        auto grenade_count = 0;
        for (const auto grenade: il2cpp::ListIterator(this_ptr->fields.m_grenades)) {
            if (!SeinGrenadeAttack::IsFracturedPiece(this_ptr, grenade)) {
                ++grenade_count;
            }
        }

        return grenade_count;
    }

    IL2CPP_INTERCEPT(bool, SpiritGrenade, CanBeBashed, app::SpiritGrenade* this_ptr) {
        return uncharged_bash_grenades_state.get<bool>() || next::SpiritGrenade::CanBeBashed(this_ptr);
    }

    // IL2CPP_BINDING(UnityEngine, Collision, app::GameObject*, get_gameObject, (app::Collision* this_ptr))
    // IL2CPP_INTERCEPT(, SpiritGrenade, void, OnCollisionEnter, (app::SpiritGrenade* this_ptr, app::Collision* collision)) {
    //     auto* go = Collision::get_gameObject(collision);
    //     auto grenades = il2cpp::unity::get_components(go, types::SpiritGrenade::get_class());
    //     if (!grenades.empty())
    //         return;
    //
    //     SpiritGrenade::OnCollisionEnter(this_ptr, collision);
    // }
    //
    // IL2CPP_INTERCEPT(, SpiritGrenade, bool, ShouldDealDamage, (app::SpiritGrenade* this_ptr, app::GameObject* go)) {
    //     auto grenades = il2cpp::unity::get_components(go, types::SpiritGrenade::get_class());
    //     if (grenades.empty())
    //         return false;
    //
    //     return SpiritGrenade::ShouldDealDamage(this_ptr, go);
    // }

    IL2CPP_INTERCEPT(void, SeinGrenadeAttack, Start, app::SeinGrenadeAttack* this_ptr) {
        this_ptr->fields.m_explodeWithSecondButtonPress = !extra_grenades_state.get<bool>();
        this_ptr->fields.m_forceExplodeGrenadeOnCollision = explode_on_collision_state.get<bool>();
        next::SeinGrenadeAttack::Start(this_ptr);
    }

    IL2CPP_INTERCEPT(
        void,
        SeinGrenadeAttack,
        SpawnGrenadeInternal,
        app::SeinGrenadeAttack* this_ptr,
        app::Vector2 velocity,
        bool bashable,
        float damage,
        app::Vector3 position,
        bool can_fracture,
        bool is_fractured_piece
    ) {
        const auto air_bashable = charge_in_air_state.get<bool>();
        if (!is_fractured_piece && air_bashable) {
            bashable = is_charged;
        }

        next::SeinGrenadeAttack::SpawnGrenadeInternal(this_ptr, velocity, bashable, damage, position, can_fracture, is_fractured_piece);
        auto multi_grenade = grenade_multishot_state.get<int>();

        // Extra Grenades * Multishot * 3 Fracture Pieces
        this_ptr->fields.MaxSpamGrenades = (1 + extra_grenades_state.get<int>()) * (1 + multi_grenade) * 3;

        if (!is_fractured_piece && multi_grenade > 0) {
            for (; multi_grenade > 0; --multi_grenade) {
                static std::random_device random_device;
                static std::mt19937 rng(std::bit_cast<int32_t>(random_device()));
                static std::uniform_real_distribution distribution(-3.f, 3.f);

                const auto x_offset = distribution(rng);
                const auto y_offset = distribution(rng);

                const app::Vector2 new_velocity{
                    .x = velocity.x + x_offset + std::copysign(1.f, x_offset),
                    .y = velocity.y + y_offset + std::copysign(1.f, y_offset),
                };

                next::SeinGrenadeAttack::SpawnGrenadeInternal(this_ptr, new_velocity, false, damage, position, can_fracture, false);
            }
        }
    }

    IL2CPP_INTERCEPT(void, SeinGrenadeAttack, UpdateNormal, app::SeinGrenadeAttack* this_ptr) {
        this_ptr->fields.MaxAimStrengthTime = static_cast<float>(MAX_AIM_STRENGTH_TIME * grenade_charge_time_state.get());
        this_ptr->fields.m_forceExplodeGrenadeOnCollision = explode_on_collision_state.get<bool>();

        is_charged = (this_ptr->fields.m_aimStrength - this_ptr->fields.MaxAimStrength) < 0.001f;

        if (SHOULD_EXPLODE_WHEN_GOING_OVER_LIMIT) {
            auto grenade_limit = extra_grenades_state.get<int>() + 1;
            grenade_limit *= grenade_multishot_state.get<int>() + 1;
            const auto grenade_count = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_grenades, "get_Count")->fields;
            this_ptr->fields.m_explodeWithSecondButtonPress = grenade_count >= grenade_limit;
        }

        next::SeinGrenadeAttack::UpdateNormal(this_ptr);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGrenadeAttack, UpdateCharacterState, app::SeinGrenadeAttack* this_ptr) {
        modloader::ScopedSetter setter(override_on_ground, charge_in_air_state.get<bool>());
        next::SeinGrenadeAttack::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, SeinCharacter, get_IsOnGround, app::SeinCharacter* this_ptr) {
        if (override_on_ground) {
            return true;
        }

        return next::SeinCharacter::get_IsOnGround(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, SeinGrenadeAttack, get_CanAim, app::SeinGrenadeAttack* this_ptr) {
        auto grenade_limit = extra_grenades_state.get<int>() + 1;
        grenade_limit *= grenade_multishot_state.get<int>() + 1;
        return count_grenades(this_ptr) < grenade_limit && this_ptr->fields.m_timeTillProjectileSpawn <= 0.0f;
    }
} // namespace
