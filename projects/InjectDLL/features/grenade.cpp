#include <constants.h>
#include <interop/csharp_bridge.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/console.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states/uber_state_manager.h>

namespace
{
    const bool SHOULD_EXPLODE_WHEN_GOING_OVER_LIMIT = true;
    const float MAX_AIM_STRENGTH_TIME = 0.4f; //This is the default time.

    const int EXTRA_GRENADES_ID = 40;
    const int EXPLODE_GRENADE_ON_COLLISION_ID = 41;
    const int BASHABLE_GRENADE_ID = 42;
    const int CHARGED_AIR_GRENADE_ID = 43;
    const int GRENADE_CHARGE_TIME_MODIFIER_ID = 44;
    const int GRENADE_MULTISHOT_ID = 45;

    constexpr float MULTI_GRENADE_OFFSET_MAGNITUDE = 2.0f;
    constexpr float MULTI_GRENADE_ANGLE = PI / 32.0f;

    bool explode = false;
    bool override_on_ground = false;
    bool is_charged = false;

    IL2CPP_BINDING(, SeinGrenadeAttack, bool, IsFracturedPiece, (app::SeinGrenadeAttack* this_ptr, app::IGreanade* grenade));

    int count_grenades(app::SeinGrenadeAttack* this_ptr)
    {
        auto grenade_count = 0;
        const auto count = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_grenades, "get_Count")->fields;
        for (auto i = 0; i < count; ++i)
        {
            auto* grenade = this_ptr->fields.m_grenades->fields._items->vector[i];
            if (!SeinGrenadeAttack::IsFracturedPiece(this_ptr, grenade))
                ++grenade_count;
        }

        return grenade_count;
    }

    IL2CPP_INTERCEPT(, SpiritGrenade, bool, CanBeBashed, (app::SpiritGrenade* this_ptr)) {
        if (uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, BASHABLE_GRENADE_ID) > 0.1f)
            return true;

        return SpiritGrenade::CanBeBashed(this_ptr);
    }

    //IL2CPP_BINDING(UnityEngine, Collision, app::GameObject*, get_gameObject, (app::Collision* this_ptr))
    //IL2CPP_INTERCEPT(, SpiritGrenade, void, OnCollisionEnter, (app::SpiritGrenade* this_ptr, app::Collision* collision)) {
    //    auto* go = Collision::get_gameObject(collision);
    //    auto grenades = il2cpp::unity::get_components(go, "", "SpiritGrenade");
    //    if (!grenades.empty())
    //        return;
    //
    //    SpiritGrenade::OnCollisionEnter(this_ptr, collision);
    //}
    //
    //IL2CPP_INTERCEPT(, SpiritGrenade, bool, ShouldDealDamage, (app::SpiritGrenade* this_ptr, app::GameObject* go)) {
    //    auto grenades = il2cpp::unity::get_components(go, "", "SpiritGrenade");
    //    if (grenades.empty())
    //        return false;
    //
    //    return SpiritGrenade::ShouldDealDamage(this_ptr, go);
    //}

    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, Start, (app::SeinGrenadeAttack* this_ptr)) {
        this_ptr->fields.m_explodeWithSecondButtonPress =
            !(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, EXTRA_GRENADES_ID) > 0.1f);
        this_ptr->fields.m_forceExplodeGrenadeOnCollision =
            uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, EXPLODE_GRENADE_ON_COLLISION_ID) > 0.1f;
        SeinGrenadeAttack::Start(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, SpawnGrenadeInternal, (app::SeinGrenadeAttack* this_ptr, app::Vector2 velocity, bool bashable, float damage, app::Vector3 position, bool can_fracture, bool is_fractured_piece)) {
        const auto air_bashable = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, CHARGED_AIR_GRENADE_ID) > 0.1f;
        if (!is_fractured_piece && air_bashable)
            bashable = is_charged;

        SeinGrenadeAttack::SpawnGrenadeInternal(this_ptr, velocity, bashable, damage, position, can_fracture, is_fractured_piece);
        const auto multi_grenade = static_cast<int32_t>(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, GRENADE_MULTISHOT_ID));
        if (!is_fractured_piece && multi_grenade > 0)
        {
            float angle_increment = 2 * PI / multi_grenade;
            for (int i = 0; i < multi_grenade; ++i)
            {
                float angle_offset = i * angle_increment;
                app::Vector2 new_velocity;
                new_velocity.x = velocity.x + MULTI_GRENADE_OFFSET_MAGNITUDE * cosf(angle_offset);
                new_velocity.y = velocity.y + MULTI_GRENADE_OFFSET_MAGNITUDE * sinf(angle_offset);
                SeinGrenadeAttack::SpawnGrenadeInternal(this_ptr, new_velocity, bashable, damage, position, can_fracture, is_fractured_piece);
            }
        }
    }

    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, UpdateNormal, (app::SeinGrenadeAttack* this_ptr)) {
        this_ptr->fields.MaxAimStrengthTime = static_cast<float>(MAX_AIM_STRENGTH_TIME *
            uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, GRENADE_CHARGE_TIME_MODIFIER_ID));
        this_ptr->fields.m_forceExplodeGrenadeOnCollision =
            uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, EXPLODE_GRENADE_ON_COLLISION_ID) > 0.1f;
    
        is_charged = (this_ptr->fields.m_aimStrength - this_ptr->fields.MaxAimStrength) < 0.001f;
        const auto custom_explode =
            uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, EXTRA_GRENADES_ID) > 0.1f;
        if (custom_explode && explode)
        {
            std::vector<app::IGreanade*> grenades;
            const auto grenade_count = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_grenades, "get_Count")->fields;
            for (auto i = 0; i < grenade_count; ++i)
            {
                auto* grenade = this_ptr->fields.m_grenades->fields._items->vector[i];
                if (!SeinGrenadeAttack::IsFracturedPiece(this_ptr, grenade))
                    grenades.push_back(grenade);
            }

            for (auto grenade : grenades)
            {
                il2cpp::invoke(grenade, "Explode");
                il2cpp::invoke(this_ptr->fields.m_grenades, "Remove", grenade);
            }
        }
    
        if (SHOULD_EXPLODE_WHEN_GOING_OVER_LIMIT)
        {
            auto grenade_limit = static_cast<int32_t>(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, EXTRA_GRENADES_ID)) + 1;
            grenade_limit *= (static_cast<int32_t>(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, GRENADE_MULTISHOT_ID)) + 1);
            const auto grenade_count = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_grenades, "get_Count")->fields;
            this_ptr->fields.m_explodeWithSecondButtonPress = grenade_count >= grenade_limit;
        }
        else
            this_ptr->fields.m_explodeWithSecondButtonPress = !custom_explode;
    
        SeinGrenadeAttack::UpdateNormal(this_ptr);
        explode = false;
    }

    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, UpdateCharacterState, (app::SeinGrenadeAttack* this_ptr)) {
        override_on_ground = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, CHARGED_AIR_GRENADE_ID) > 0.1f;
        SeinGrenadeAttack::UpdateCharacterState(this_ptr);
        override_on_ground = false;
    }

    IL2CPP_INTERCEPT(, SeinCharacter, bool, get_IsOnGround, (app::SeinCharacter* this_ptr)) {
        if (override_on_ground)
            return true;

        return SeinCharacter::get_IsOnGround(this_ptr);
    }
    
    IL2CPP_INTERCEPT(, SeinGrenadeAttack, bool, get_CanAim, (app::SeinGrenadeAttack * this_ptr)) {
        auto grenade_limit = static_cast<int32_t>(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, EXTRA_GRENADES_ID)) + 1;
        grenade_limit *= (static_cast<int32_t>(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, GRENADE_MULTISHOT_ID)) + 1);
        return count_grenades(this_ptr) < grenade_limit && this_ptr->fields.m_timeTillProjectileSpawn <= 0.0f;
    }
}

INJECT_C_DLLEXPORT void explode_grenades()
{
    explode = true;
}
