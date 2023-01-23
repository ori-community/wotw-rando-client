#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinFireburstSpell.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinFireburstSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC4B0, void, Start, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC760, void, OnSetReferenceToSein, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC790, void, OnAwake, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC880, void, OnDestroy, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADCBA0, void, ModifyGravityPlatformMovementSettings, (app::SeinFireburstSpell * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x04726240, SeinFireburstSpell_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADCC30, void, ModifyHorizontalPlatformMovementSettings, (app::SeinFireburstSpell * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x04732550, SeinFireburstSpell_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADCCA0, void, PlayAimAnimation, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADD480, bool, KeepPlayingAnimation, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705898, SeinFireburstSpell_KeepPlayingAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADD4F0, void, OnStartAnimFinished, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047396D0, SeinFireburstSpell_OnStartAnimFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADD510, void, ActivateSpell, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADD9F0, void, DeactivateSpell, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADDA30, void, BeginCasting, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADDBF0, void, EndCasting, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADDD80, void, PlaySound, (app::SeinFireburstSpell * this_ptr, app::SoundProvider* sound))
    IL2CPP_REGISTER_METHOD(0x00ADDF10, void, OnExit, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADDF40, bool, get_IsStatePerforming, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADDF50, void, UpdateCharacterState, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADE010, void, UpdateNotCasting, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADE0B0, void, UpdateSpellActive, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADE3C0, void, UpdateCasting, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADEC60, void, UpdateParticleDamageDealing, (app::SeinFireburstSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADF110, bool, PointInsideParticles, (app::SeinFireburstSpell * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00ADF2A0, void, ctor, (app::SeinFireburstSpell * this_ptr))
} // namespace app::classes::SeinFireburstSpell
