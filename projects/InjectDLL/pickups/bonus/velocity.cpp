#include <dll_main.h>
#include <csharp_bridge.h>
#include <features\invert_swim.h>

#include <Common/ext.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <uber_states\uber_state_manager.h>

namespace
{
    constexpr int CHARGE_SPEED_MULTIPLIER_ID = 80;
    constexpr int DASH_DISTANCE_MULTIPLIER_ID = 81;
    constexpr int BASH_SPEED_MULTIPLIER = 82;
    constexpr int BURROW_SPEED_MULTIPLIER = 83;
    constexpr int BURROW_DASH_SPEED_MULTIPLIER = 84;
    constexpr int SWIM_DASH_SPEED_MULTIPLIER = 86;

    float initial_jump_speed;

    IL2CPP_INTERCEPT(, SeinChargeJump, void, OnAwake, (app::SeinChargeJump* this_ptr)) {
        SeinChargeJump::OnAwake(this_ptr);
        initial_jump_speed = this_ptr->fields.JumpSpeed;
    }

    IL2CPP_INTERCEPT(, SeinChargeJump, void, EnterMove, (app::SeinChargeJump* this_ptr)) {
        this_ptr->fields.JumpSpeed = initial_jump_speed * uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, CHARGE_SPEED_MULTIPLIER_ID);
        SeinChargeJump::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, OnProcessRootMotion, (app::SeinDashNew * this_ptr, app::Vector3 root_velocity)) {
        float modifier = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, DASH_DISTANCE_MULTIPLIER_ID);
        root_velocity.x *= modifier;
        root_velocity.y *= modifier;
        root_velocity.z *= modifier;
        SeinDashNew::OnProcessRootMotion(this_ptr, root_velocity);
    }

    bool override_animation = false;
    float initial_bash_speed;
    float initial_bash_force;
    float initial_bash_enemy_force;

    IL2CPP_INTERCEPT(, SeinBashAttack, void, Start, (app::SeinBashAttack* this_ptr)) {
        initial_bash_speed = this_ptr->fields.BashVelocity;
        initial_bash_enemy_force = this_ptr->fields.EnemyThrowForce;
        SeinBashAttack::Start(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBashAttack, void, BeginBash, (app::SeinBashAttack* this_ptr)) {
        float modifier = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, BASH_SPEED_MULTIPLIER);
        this_ptr->fields.BashVelocity = initial_bash_speed * modifier;
        this_ptr->fields.EnemyThrowForce = initial_bash_enemy_force * modifier;
        SeinBashAttack::BeginBash(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBashAttack, void, UpdateCharacterState, (app::SeinBashAttack* this_ptr)) {
        override_animation = true;
        SeinBashAttack::UpdateCharacterState(this_ptr);
        override_animation = false;
    }

    IL2CPP_INTERCEPT(UnityEngine, AnimationCurve, float, Evaluate, (app::SeinBashAttack* this_ptr, float value)) {
        auto output = AnimationCurve::Evaluate(this_ptr, value);
        if (override_animation)
            output *= uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, BASH_SPEED_MULTIPLIER);

        return output;
    }

    float initial_burrow_speed;
    float initial_burrow_dash;

    IL2CPP_INTERCEPT(, SeinDigging, void, OnAwake, (app::SeinDigging* this_ptr)) {
        initial_burrow_speed = this_ptr->fields.DigSpeed;
        initial_burrow_dash = this_ptr->fields.DashSpeed;
        SeinDigging::OnAwake(this_ptr);
    }
    
    IL2CPP_INTERCEPT(, SeinDigging, void, UpdateDiggingState, (app::SeinDigging* this_ptr)) {
        float modifier = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, BURROW_SPEED_MULTIPLIER);
        this_ptr->fields.DigSpeed = initial_burrow_speed * modifier;
        SeinDigging::UpdateDiggingState(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, StartDashing, (app::SeinDigging* this_ptr)) {
        float modifier = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, BURROW_DASH_SPEED_MULTIPLIER);
        this_ptr->fields.DashSpeed = initial_burrow_dash * modifier;
        SeinDigging::StartDashing(this_ptr);
    }

    float initial_swim_speed;
    float initial_swim_dash;

    IL2CPP_INTERCEPT(, SeinSwimming, void, OnAwake, (app::SeinSwimming* this_ptr)) {
        initial_swim_speed = this_ptr->fields.SwimSpeed;
        initial_swim_dash = this_ptr->fields.DashMaxSpeed;
        SeinSwimming::OnAwake(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, UpdateCharacterState, (app::SeinSwimming* this_ptr)) {
        invert_swim();
        SeinSwimming::UpdateCharacterState(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, StartDashing, (app::SeinSwimming* this_ptr)) {
        float modifier = uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, SWIM_DASH_SPEED_MULTIPLIER);
        this_ptr->fields.DashMaxSpeed = initial_swim_dash * modifier;
        SeinSwimming::StartDashing(this_ptr);
    }
}