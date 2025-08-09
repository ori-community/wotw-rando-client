#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/KuBowAttack.h>
#include <Modloader/app/structs/SeinBowAttack.h>
#include <Modloader/app/structs/SeinCharacter.h>

namespace app::classes::KuBowAttack {
    IL2CPP_REGISTER_METHOD(0x0122C980, app::SeinCharacter*, get_Sein, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122CA10, app::SeinBowAttack*, get_SeinBow, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122CAD0, bool, get_IsStatePerforming, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122CBC0, void, OnSetReferenceToKu, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122CBF0, void, UpdateState, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122CE70, void, StartAttack, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122D140, void, EndAttack, app::KuBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122D410, void, ModifyGravityPlatformMovementSettings, app::KuBowAttack* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(
        0x0122D470,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::KuBowAttack* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::KuBowAttack* this_ptr)
} // namespace app::classes::KuBowAttack
