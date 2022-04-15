#include <interop/csharp_bridge.h>
#include <features/controls/invert_swim.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    uber_states::UberState launch_speed(UberStateGroup::RandoUpgrade, 80);
    uber_states::UberState dash_distance(UberStateGroup::RandoUpgrade, 81);
    uber_states::UberState bash_speed(UberStateGroup::RandoUpgrade, 82);
    uber_states::UberState burrow_speed(UberStateGroup::RandoUpgrade, 83);
    uber_states::UberState burrow_dash_speed(UberStateGroup::RandoUpgrade, 84);

    uber_states::UberState swim_dash_speed(UberStateGroup::RandoUpgrade, 86);
    uber_states::UberState jump_height(UberStateGroup::RandoUpgrade, 87);
    uber_states::UberState wall_jump(UberStateGroup::RandoUpgrade, 88);
    uber_states::UberState double_jump(UberStateGroup::RandoUpgrade, 89);

    float initial_jump_speed;

    IL2CPP_INTERCEPT(, SeinChargeJump, void, OnAwake, (app::SeinChargeJump* this_ptr)) {
        SeinChargeJump::OnAwake(this_ptr);
        initial_jump_speed = this_ptr->fields.JumpSpeed;
    }

    IL2CPP_INTERCEPT(, SeinChargeJump, void, EnterMove, (app::SeinChargeJump* this_ptr)) {
        this_ptr->fields.JumpSpeed = initial_jump_speed * launch_speed.get<float>();
        SeinChargeJump::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, OnProcessRootMotion, (app::SeinDashNew * this_ptr, app::Vector3 root_velocity)) {
        float modifier = dash_distance.get<float>();
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
        float modifier = bash_speed.get<float>();
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
            output *= bash_speed.get<float>();

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
        float modifier = burrow_speed.get<float>();
        this_ptr->fields.DigSpeed = initial_burrow_speed * modifier;
        SeinDigging::UpdateDiggingState(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, StartDashing, (app::SeinDigging* this_ptr)) {
        float modifier = burrow_dash_speed.get<float>();
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
        float modifier = swim_dash_speed.get<float>();
        this_ptr->fields.DashMaxSpeed = initial_swim_dash * modifier;
        SeinSwimming::StartDashing(this_ptr);
    }

    float jump_height_backflip;
    float jump_height_crouch;
    float jump_height_idle;
    float jump_height_first;
    float jump_height_second;
    float jump_height_third;

    IL2CPP_INTERCEPT(, SeinJump, void, OnAwake, (app::SeinJump* this_ptr)) {
        SeinJump::OnAwake(this_ptr);
        jump_height_backflip = this_ptr->fields.BackflipJumpHeight;
        jump_height_crouch = this_ptr->fields.CrouchJumpHeight;
        jump_height_idle = this_ptr->fields.JumpIdleHeight;
        jump_height_first = this_ptr->fields.FirstJumpHeight;
        jump_height_second = this_ptr->fields.SecondJumpHeight;
        jump_height_third = this_ptr->fields.ThirdJumpHeight;
    }

    IL2CPP_INTERCEPT(, SeinJump, void, UpdateCharacterState, (app::SeinJump* this_ptr)) {
        float modifier = jump_height.get<float>();
        this_ptr->fields.BackflipJumpHeight = jump_height_backflip * modifier;
        this_ptr->fields.CrouchJumpHeight = jump_height_crouch * modifier;
        this_ptr->fields.JumpIdleHeight = jump_height_idle * modifier;
        this_ptr->fields.FirstJumpHeight = jump_height_first * modifier;
        this_ptr->fields.SecondJumpHeight = jump_height_second * modifier;
        this_ptr->fields.ThirdJumpHeight = jump_height_third * modifier;
        SeinJump::UpdateCharacterState(this_ptr);
    }

    bool initialized = false;
    float double_jump_strength;

    IL2CPP_INTERCEPT(, SeinDoubleJump, void, UpdateCharacterState, (app::SeinDoubleJump* this_ptr)) {
        if (!initialized)
        {
            double_jump_strength = this_ptr->fields.JumpStrength;
            initialized = true;
        }

        float modifier = double_jump.get<float>();
        this_ptr->fields.JumpStrength = double_jump_strength * modifier;
        SeinDoubleJump::UpdateCharacterState(this_ptr);
    }

    app::Vector2 wall_jump_strength;
    float wall_jump_strength_magnitude;
    app::Vector2 wall_jump_strength_under_ceiling;
    float wall_jump_strength_under_ceiling_magnitude;
    
    IL2CPP_INTERCEPT(, SeinWallJump, void, OnAwake, (app::SeinWallJump* this_ptr)) {
        SeinWallJump::OnAwake(this_ptr);

        wall_jump_strength = this_ptr->fields.JumpStrength;
        wall_jump_strength_magnitude = std::sqrtf(wall_jump_strength.x * wall_jump_strength.x + wall_jump_strength.y * wall_jump_strength.y);
        wall_jump_strength.x /= wall_jump_strength_magnitude;
        wall_jump_strength.y /= wall_jump_strength_magnitude;

        wall_jump_strength_under_ceiling = this_ptr->fields.JumpStrengthUnderCeiling;
        wall_jump_strength_under_ceiling_magnitude = std::sqrtf(wall_jump_strength_under_ceiling.x * wall_jump_strength_under_ceiling.x
            + wall_jump_strength_under_ceiling.y * wall_jump_strength_under_ceiling.y);
        wall_jump_strength_under_ceiling.x /= wall_jump_strength_under_ceiling_magnitude;
        wall_jump_strength_under_ceiling.y /= wall_jump_strength_under_ceiling_magnitude;

    }
    
    // Should we maybe increase modify x here as well?
    IL2CPP_INTERCEPT(, SeinWallJump, void, PerformWallJump, (app::SeinWallJump* this_ptr, bool to_left)) {
        float modifier = wall_jump.get<float>();
        this_ptr->fields.JumpStrength = wall_jump_strength;
        this_ptr->fields.JumpStrength.x *= wall_jump_strength_magnitude;
        this_ptr->fields.JumpStrength.y *= wall_jump_strength_magnitude * modifier;

        this_ptr->fields.JumpStrengthUnderCeiling = wall_jump_strength_under_ceiling;
        this_ptr->fields.JumpStrengthUnderCeiling.x *= wall_jump_strength_under_ceiling_magnitude;
        this_ptr->fields.JumpStrengthUnderCeiling.y *= wall_jump_strength_under_ceiling_magnitude * modifier;

        SeinWallJump::PerformWallJump(this_ptr, to_left);
    }
}