#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KuState {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Ku *, get_Ku, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246820, app::CharacterGravity *, get_CharacterGravity, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246860, app::CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012468A0, app::CharacterPlatformMovement *, get_PlatformMovement, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012468E0, void, OnDisable, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246900, void, set_IsActive, (app::KuState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246930, void, PlayAnimation, (app::KuState * this_ptr, app::MoonAnimation * animation, int32_t priority, app::Func_1_Boolean_ * continue_condition, app::Action * on_animation_end, bool force_override))
    IL2CPP_REGISTER_METHOD(0x01236310, void, StopAnimation, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsPlayingAnimation, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246990, void, PlaySoundEvent, (app::KuState * this_ptr, app::Event_1 * wise_event))
    IL2CPP_REGISTER_METHOD(0x01246AB0, void, SetOriFloatAnimationParameter, (app::KuState * this_ptr, app::FloatAnimationParameter * parameter, float value))
    IL2CPP_REGISTER_METHOD(0x01246C60, void, Serialize, (app::KuState * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x01246D20, void, SetReferenceToKu, (app::KuState * this_ptr, app::Ku * ku))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetReferenceToKu, (app::KuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::KuState * this_ptr))
}
