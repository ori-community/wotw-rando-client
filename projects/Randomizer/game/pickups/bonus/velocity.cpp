#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/features/controls/invert_swim.h>

#include <Common/ext.h>

#include <Modloader/app/methods/SeinBashAttack.h>
#include <Modloader/app/methods/SeinChargeJump.h>
#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/app/methods/SeinDigging.h>
#include <Modloader/app/methods/SeinDoubleJump.h>
#include <Modloader/app/methods/SeinJump.h>
#include <Modloader/app/methods/SeinSpiritLeashAbility.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/methods/SeinWallJump.h>
#include <Modloader/app/methods/UnityEngine/AnimationCurve.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

namespace {
    core::api::uber_states::UberState launch_speed(UberStateGroup::RandoUpgrade, 80);
    core::api::uber_states::UberState dash_distance(UberStateGroup::RandoUpgrade, 81);
    core::api::uber_states::UberState bash_speed(UberStateGroup::RandoUpgrade, 82);
    core::api::uber_states::UberState burrow_speed(UberStateGroup::RandoUpgrade, 83);
    core::api::uber_states::UberState burrow_dash_speed(UberStateGroup::RandoUpgrade, 84);
    core::api::uber_states::UberState grapple_speed(UberStateGroup::RandoUpgrade, 90);

    core::api::uber_states::UberState swim_dash_speed(UberStateGroup::RandoUpgrade, 86);
    core::api::uber_states::UberState jump_height(UberStateGroup::RandoUpgrade, 87);
    core::api::uber_states::UberState wall_jump(UberStateGroup::RandoUpgrade, 88);
    core::api::uber_states::UberState double_jump(UberStateGroup::RandoUpgrade, 89);

    float initial_jump_speed;

    IL2CPP_INTERCEPT(SeinChargeJump, void, OnAwake, (app::SeinChargeJump * this_ptr)) {
        next::SeinChargeJump::OnAwake(this_ptr);
        initial_jump_speed = this_ptr->fields.JumpSpeed;
    }

    IL2CPP_INTERCEPT(SeinChargeJump, void, EnterMove, (app::SeinChargeJump * this_ptr)) {
        this_ptr->fields.JumpSpeed = initial_jump_speed * launch_speed.get<float>();
        next::SeinChargeJump::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDashNew, void, OnProcessRootMotion, (app::SeinDashNew * this_ptr, app::Vector3 root_velocity)) {
        auto modifier = dash_distance.get<float>();
        root_velocity.x *= modifier;
        root_velocity.y *= modifier;
        root_velocity.z *= modifier;
        next::SeinDashNew::OnProcessRootMotion(this_ptr, root_velocity);
    }

    bool should_override_animation_curve_speed_for_bash = false;
    float initial_bash_speed;
    float initial_bash_enemy_force;

    IL2CPP_INTERCEPT(SeinBashAttack, void, Start, (app::SeinBashAttack * this_ptr)) {
        initial_bash_speed = this_ptr->fields.BashVelocity;
        initial_bash_enemy_force = this_ptr->fields.EnemyThrowForce;
        next::SeinBashAttack::Start(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBashAttack, void, BeginBash, (app::SeinBashAttack * this_ptr)) {
        auto modifier = bash_speed.get<float>();
        this_ptr->fields.BashVelocity = initial_bash_speed * modifier;
        this_ptr->fields.EnemyThrowForce = initial_bash_enemy_force * modifier;
        next::SeinBashAttack::BeginBash(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBashAttack, void, UpdateCharacterState, (app::SeinBashAttack * this_ptr)) {
        modloader::ScopedSetter setter(should_override_animation_curve_speed_for_bash, true);
        next::SeinBashAttack::UpdateCharacterState(this_ptr);
    }

    bool spirit_leash_initialized = false;
    float spirit_leash_default_hook_fling_speed_maximum;
    float spirit_leash_default_max_interrupt_speed_maximum;
    float spirit_leash_default_spirit_leash_max_pull_speed;
    IL2CPP_INTERCEPT(SeinSpiritLeashAbility, void, EnterMove, (app::SeinSpiritLeashAbility * this_ptr)) {
        if (!spirit_leash_initialized) {
            spirit_leash_initialized = true;
            spirit_leash_default_hook_fling_speed_maximum = this_ptr->fields.HookFlingSpeedMaximum;
            spirit_leash_default_max_interrupt_speed_maximum = this_ptr->fields.MaxInterruptSpeedMaximum;
            spirit_leash_default_spirit_leash_max_pull_speed = this_ptr->fields.SpiritLeashMaxPullSpeed;
        }

        auto multiplier = grapple_speed.get<float>();
        this_ptr->fields.HookFlingSpeedMaximum = spirit_leash_default_hook_fling_speed_maximum * sqrt(multiplier);
        this_ptr->fields.MaxInterruptSpeedMaximum = spirit_leash_default_max_interrupt_speed_maximum * sqrt(multiplier);
        this_ptr->fields.SpiritLeashMaxPullSpeed = spirit_leash_default_spirit_leash_max_pull_speed * multiplier;

        next::SeinSpiritLeashAbility::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(UnityEngine::AnimationCurve, float, Evaluate, (app::AnimationCurve * this_ptr, float value)) {
        auto output = next::UnityEngine::AnimationCurve::Evaluate(this_ptr, value);
        if (should_override_animation_curve_speed_for_bash) {
            output *= bash_speed.get<float>();
        }

        return output;
    }

    float initial_burrow_speed;
    float initial_burrow_dash_speed;
    float initial_burrow_dash_enter_speed;
    float initial_burrow_dash_exit_speed;

    IL2CPP_INTERCEPT(SeinDigging, void, OnAwake, (app::SeinDigging * this_ptr)) {
        initial_burrow_speed = this_ptr->fields.DigSpeed;
        initial_burrow_dash_speed = this_ptr->fields.DashSpeed;
        initial_burrow_dash_enter_speed = this_ptr->fields.OutOfDigDashSpeed;
        initial_burrow_dash_exit_speed = this_ptr->fields.DashExitDigSpeed;
        next::SeinDigging::OnAwake(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDigging, void, UpdateDiggingState, (app::SeinDigging * this_ptr)) {
        auto modifier = burrow_speed.get<float>();
        this_ptr->fields.DigSpeed = initial_burrow_speed * modifier;
        next::SeinDigging::UpdateDiggingState(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDigging, void, StartDashing, (app::SeinDigging * this_ptr)) {
        auto modifier = burrow_dash_speed.get<float>();
        this_ptr->fields.DashSpeed = initial_burrow_dash_speed * modifier;
        next::SeinDigging::StartDashing(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDigging, void, StartOutOfZoneDashing, (app::SeinDigging * this_ptr)) {
        auto modifier = burrow_dash_speed.get<float>();
        this_ptr->fields.OutOfDigDashSpeed = initial_burrow_dash_enter_speed * (1.f + (modifier - 1.f) / 1.5f);  // Affect less than normal dash
        next::SeinDigging::StartOutOfZoneDashing(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDigging, void, EndDigging, (app::SeinDigging * this_ptr)) {
        auto modifier = burrow_dash_speed.get<float>();
        this_ptr->fields.DashExitDigSpeed = initial_burrow_dash_exit_speed * (1.f + (modifier - 1.f) / 1.5f);  // Affect less than normal dash
        next::SeinDigging::EndDigging(this_ptr);
    }

    float initial_swim_speed;
    float initial_swim_dash_speed;
    float initial_swim_dash_enter_speed;
    float initial_swim_dash_exit_speed;

    IL2CPP_INTERCEPT(SeinSwimming, void, OnAwake, (app::SeinSwimming * this_ptr)) {
        initial_swim_speed = this_ptr->fields.SwimSpeed;
        initial_swim_dash_speed = this_ptr->fields.DashMaxSpeed;
        initial_swim_dash_enter_speed = this_ptr->fields.DashIntoWaterCurveMaxSpeed;
        initial_swim_dash_exit_speed = this_ptr->fields.DashExitCurveMaxSpeed;
        next::SeinSwimming::OnAwake(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinSwimming, void, StartDashing, (app::SeinSwimming * this_ptr)) {
        auto modifier = swim_dash_speed.get<float>();
        this_ptr->fields.DashMaxSpeed = initial_swim_dash_speed * modifier;
        next::SeinSwimming::StartDashing(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinSwimming, void, OnEnterDashIntoWater, (app::SeinSwimming * this_ptr)) {
        auto modifier = swim_dash_speed.get<float>();
        this_ptr->fields.DashIntoWaterCurveMaxSpeed = initial_swim_dash_enter_speed * (1.f + (modifier - 1.f) / 1.5f);  // Affect less than water dash
        next::SeinSwimming::OnEnterDashIntoWater(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinSwimming, void, OnEnterDashingOutOfWater, (app::SeinSwimming * this_ptr)) {
        auto modifier = swim_dash_speed.get<float>();
        this_ptr->fields.DashExitCurveMaxSpeed = initial_swim_dash_exit_speed * (1.f + (modifier - 1.f) / 1.5f);  // Affect less than water dash
        next::SeinSwimming::OnEnterDashingOutOfWater(this_ptr);
    }

    float jump_height_backflip = 0.f;
    float jump_height_crouch = 0.f;
    float jump_height_idle = 0.f;
    float jump_height_first = 0.f;
    float jump_height_second = 0.f;
    float jump_height_third = 0.f;

    IL2CPP_INTERCEPT(SeinJump, void, OnAwake, (app::SeinJump * this_ptr)) {
        next::SeinJump::OnAwake(this_ptr);
        jump_height_backflip = this_ptr->fields.BackflipJumpHeight;
        jump_height_crouch = this_ptr->fields.CrouchJumpHeight;
        jump_height_idle = this_ptr->fields.JumpIdleHeight;
        jump_height_first = this_ptr->fields.FirstJumpHeight;
        jump_height_second = this_ptr->fields.SecondJumpHeight;
        jump_height_third = this_ptr->fields.ThirdJumpHeight;
    }

    IL2CPP_INTERCEPT(SeinJump, void, UpdateCharacterState, (app::SeinJump * this_ptr)) {
        auto modifier = jump_height.get<float>();
        this_ptr->fields.BackflipJumpHeight = jump_height_backflip * modifier;
        this_ptr->fields.CrouchJumpHeight = jump_height_crouch * modifier;
        this_ptr->fields.JumpIdleHeight = jump_height_idle * modifier;
        this_ptr->fields.FirstJumpHeight = jump_height_first * modifier;
        this_ptr->fields.SecondJumpHeight = jump_height_second * modifier;
        this_ptr->fields.ThirdJumpHeight = jump_height_third * modifier;
        next::SeinJump::UpdateCharacterState(this_ptr);
    }

    bool double_jump_strength_initialized = false;
    float double_jump_strength;

    IL2CPP_INTERCEPT(SeinDoubleJump, void, UpdateCharacterState, (app::SeinDoubleJump * this_ptr)) {
        if (!double_jump_strength_initialized) {
            double_jump_strength = this_ptr->fields.JumpStrength;
            double_jump_strength_initialized = true;
        }

        auto modifier = double_jump.get<float>();
        this_ptr->fields.JumpStrength = double_jump_strength * modifier;
        next::SeinDoubleJump::UpdateCharacterState(this_ptr);
    }

    app::Vector2 wall_jump_strength;
    float wall_jump_strength_magnitude;
    app::Vector2 wall_jump_strength_under_ceiling;
    float wall_jump_strength_under_ceiling_magnitude;

    IL2CPP_INTERCEPT(SeinWallJump, void, OnAwake, (app::SeinWallJump * this_ptr)) {
        next::SeinWallJump::OnAwake(this_ptr);

        wall_jump_strength = this_ptr->fields.JumpStrength;
        wall_jump_strength_magnitude = std::sqrtf(wall_jump_strength.x * wall_jump_strength.x + wall_jump_strength.y * wall_jump_strength.y);
        wall_jump_strength.x /= wall_jump_strength_magnitude;
        wall_jump_strength.y /= wall_jump_strength_magnitude;

        wall_jump_strength_under_ceiling = this_ptr->fields.JumpStrengthUnderCeiling;
        wall_jump_strength_under_ceiling_magnitude = std::sqrtf(wall_jump_strength_under_ceiling.x * wall_jump_strength_under_ceiling.x + wall_jump_strength_under_ceiling.y * wall_jump_strength_under_ceiling.y);
        wall_jump_strength_under_ceiling.x /= wall_jump_strength_under_ceiling_magnitude;
        wall_jump_strength_under_ceiling.y /= wall_jump_strength_under_ceiling_magnitude;
    }

    // Should we maybe increase modify x here as well?
    IL2CPP_INTERCEPT(SeinWallJump, void, PerformWallJump_2, (app::SeinWallJump * this_ptr, bool to_left)) {
        auto modifier = wall_jump.get<float>();
        this_ptr->fields.JumpStrength = wall_jump_strength;
        this_ptr->fields.JumpStrength.x *= wall_jump_strength_magnitude;
        this_ptr->fields.JumpStrength.y *= wall_jump_strength_magnitude * modifier;

        this_ptr->fields.JumpStrengthUnderCeiling = wall_jump_strength_under_ceiling;
        this_ptr->fields.JumpStrengthUnderCeiling.x *= wall_jump_strength_under_ceiling_magnitude;
        this_ptr->fields.JumpStrengthUnderCeiling.y *= wall_jump_strength_under_ceiling_magnitude * modifier;

        next::SeinWallJump::PerformWallJump_2(this_ptr, to_left);
    }
} // namespace
