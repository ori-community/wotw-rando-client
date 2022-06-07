#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KuBowAttack {
    IL2CPP_REGISTER_METHOD(0x0122C980, app::SeinCharacter *, get_Sein, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122CA10, app::SeinBowAttack *, get_SeinBow, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122CAD0, bool, get_IsStatePerforming, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122CBC0, void, OnSetReferenceToKu, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122CBF0, void, UpdateState, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122CE70, void, StartAttack, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122D140, void, EndAttack, (app::KuBowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122D410, void, ModifyGravityPlatformMovementSettings, (app::KuBowAttack * this_ptr, app::GravityPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x04762F68, KuBowAttack_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0122D470, void, ModifyHorizontalPlatformMovementSettings, (app::KuBowAttack * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x047365C0, KuBowAttack_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::KuBowAttack * this_ptr))
}
