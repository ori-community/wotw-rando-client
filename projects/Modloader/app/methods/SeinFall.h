#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinFall.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SeinFallPuppet.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinFall {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4DF0, app::SeinFallPuppet*, get_Puppet, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4EB0, bool, IsTurnAnimBlocking, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4ED0, bool, get_ShouldFallMovingAnimationPlay, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4F20, bool, get_ShouldFallIdleAnimationPlay, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4F70, bool, get_IsPlayingHeavyLand, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5050, void, OnSetReferenceToSein, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5130, app::Vector3, get_LongFallParticleSpawnPoint, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5280, void, Start, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5600, void, OnDestroy, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD57A0, void, OnExit, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5810, bool, ShouldFallMovingAnimationKeepPlaying, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5BE0, bool, ShouldFallIdleAnimationKeepPlaying, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldTurnAnimationKeepPlaying, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPlayTurnAnimation, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5FB0, void, OnTurnAnimStop, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD5FE0, void, UpdateCharacterState, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD6B00, void, HandleFalling, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD6EE0, void, HandleLandOnGround, (app::SeinFall * this_ptr, app::Vector3 normal, app::Collider* target))
    IL2CPP_REGISTER_METHOD(0x00AD7860, void, ExecuteLandingEffects, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD7B60, void, ExecuteLongLandingEffects, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD7E40, void, LongLand, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD81E0, void, HeavyLand, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD83E0, void, PlayLongFallLandAnimation, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8570, void, InterruptLongFallLandAnimation, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD85A0, void, IgnoreLand, (app::SeinFall * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00AD85B0, void, IgnoreLandAndFall, (app::SeinFall * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00AD85D0, bool, ShouldFallTurnAnimationKeepPlaying, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8870, bool, get_HasStartedTurning, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD88A0, bool, get_HasFinishedTurning, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD88C0, bool, get_WantsToFaceLeft, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD88D0, void, set_WantsToFaceLeft, (app::SeinFall * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00AD88E0, bool, get_ShouldInterruptTurning, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8900, bool, get_IsCancellable, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8920, void, InterruptTurning, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8940, void, Turn, (app::SeinFall * this_ptr, bool face_left))
    IL2CPP_REGISTER_METHOD(0x00AD89C0, void, ctor, (app::SeinFall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8A20, void, _Start_b__46_0, (app::SeinFall * this_ptr, app::RaycastHit hit))
    IL2CPP_REGISTER_METHOD(0x00AD8A50, bool, _PlayLongFallLandAnimation_b__64_0, (app::SeinFall * this_ptr))
} // namespace app::classes::SeinFall
