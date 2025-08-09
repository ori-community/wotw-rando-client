#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/SeinGrenadeAttack.h>
#include <Modloader/app/methods/SpiritGrenade.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/constants.h>
#include <Randomizer/macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    const bool SHOULD_EXPLODE_WHEN_GOING_OVER_LIMIT = true;
    const float MAX_AIM_STRENGTH_TIME = 0.4f; // This is the default time.

    core::api::uber_states::UberState extra_grenades(UberStateGroup::RandoUpgrade, 40);
    core::api::uber_states::UberState explode_on_collision(UberStateGroup::RandoUpgrade, 41);
    core::api::uber_states::UberState uncharged_bash_grenades(UberStateGroup::RandoUpgrade, 42);
    core::api::uber_states::UberState charge_in_air(UberStateGroup::RandoUpgrade, 43);
    core::api::uber_states::UberState grenade_charge_time(UberStateGroup::RandoUpgrade, 44);
    core::api::uber_states::UberState grenade_multishot(UberStateGroup::RandoUpgrade, 45);

    constexpr float MULTI_GRENADE_OFFSET_MAGNITUDE = 2.0f;

    bool explode = false;
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
        return uncharged_bash_grenades.get<bool>() || next::SpiritGrenade::CanBeBashed(this_ptr);
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
        this_ptr->fields.m_explodeWithSecondButtonPress = !extra_grenades.get<bool>();
        this_ptr->fields.m_forceExplodeGrenadeOnCollision = explode_on_collision.get<bool>();
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
        const auto air_bashable = charge_in_air.get<bool>();
        if (!is_fractured_piece && air_bashable) {
            bashable = is_charged;
        }

        next::SeinGrenadeAttack::SpawnGrenadeInternal(this_ptr, velocity, bashable, damage, position, can_fracture, is_fractured_piece);
        const auto multi_grenade = grenade_multishot.get<int>();
        if (!is_fractured_piece && multi_grenade > 0) {
            const float angle_increment = 2 * PI / multi_grenade;
            for (int i = 0; i < multi_grenade; ++i) {
                const float angle_offset = i * angle_increment;
                const app::Vector2 new_velocity{
                    .x = velocity.x + MULTI_GRENADE_OFFSET_MAGNITUDE * cosf(angle_offset), .y = velocity.y + MULTI_GRENADE_OFFSET_MAGNITUDE * sinf(angle_offset)
                };

                next::SeinGrenadeAttack::SpawnGrenadeInternal(this_ptr, new_velocity, bashable, damage, position, can_fracture, is_fractured_piece);
            }
        }
    }

    IL2CPP_INTERCEPT(void, SeinGrenadeAttack, UpdateNormal, app::SeinGrenadeAttack* this_ptr) {
        this_ptr->fields.MaxAimStrengthTime = static_cast<float>(MAX_AIM_STRENGTH_TIME * grenade_charge_time.get());
        this_ptr->fields.m_forceExplodeGrenadeOnCollision = explode_on_collision.get<bool>();

        is_charged = (this_ptr->fields.m_aimStrength - this_ptr->fields.MaxAimStrength) < 0.001f;
        const auto custom_explode = extra_grenades.get<bool>();
        if (custom_explode && explode) {
            std::vector<app::IGreanade*> grenades;
            for (const auto grenade: il2cpp::ListIterator(this_ptr->fields.m_grenades)) {
                if (!SeinGrenadeAttack::IsFracturedPiece(this_ptr, grenade)) {
                    grenades.push_back(grenade);
                }
            }

            for (const auto grenade: grenades) {
                il2cpp::invoke(grenade, "Explode");
                il2cpp::invoke(this_ptr->fields.m_grenades, "Remove", grenade);
            }
        }

        if (SHOULD_EXPLODE_WHEN_GOING_OVER_LIMIT) {
            auto grenade_limit = extra_grenades.get<int>() + 1;
            grenade_limit *= grenade_multishot.get<int>() + 1;
            const auto grenade_count = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_grenades, "get_Count")->fields;
            this_ptr->fields.m_explodeWithSecondButtonPress = grenade_count >= grenade_limit;
        } else {
            this_ptr->fields.m_explodeWithSecondButtonPress = !custom_explode;
        }

        next::SeinGrenadeAttack::UpdateNormal(this_ptr);
        explode = false;
    }

    IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGrenadeAttack, UpdateCharacterState, app::SeinGrenadeAttack* this_ptr) {
        modloader::ScopedSetter setter(override_on_ground, charge_in_air.get<bool>());
        next::SeinGrenadeAttack::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, SeinCharacter, get_IsOnGround, app::SeinCharacter* this_ptr) {
        if (override_on_ground) {
            return true;
        }

        return next::SeinCharacter::get_IsOnGround(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, SeinGrenadeAttack, get_CanAim, app::SeinGrenadeAttack* this_ptr) {
        auto grenade_limit = extra_grenades.get<int>() + 1;
        grenade_limit *= grenade_multishot.get<int>() + 1;
        return count_grenades(this_ptr) < grenade_limit && this_ptr->fields.m_timeTillProjectileSpawn <= 0.0f;
    }
} // namespace

RANDOMIZER_C_DLLEXPORT void explode_grenades() { explode = true; }
