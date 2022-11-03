#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Toad {
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (app::Toad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFB360, void, set_IsSuspended, (app::Toad * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::SuspendableMask__Enum, get_Mask, (app::Toad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_Mask, (app::Toad * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00AFB3A0, void, Awake, (app::Toad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFB560, void, OnDestroy, (app::Toad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFB710, void, OnEnable, (app::Toad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFB820, void, OnAnimationEvent_1, (app::Toad * this_ptr, app::String* event_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent_2, (app::Toad * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourEnter, (app::Toad * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourExit, (app::Toad * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourUpdate, (app::Toad * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x00AFB950, void, Serialize, (app::Toad * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameSerializeLoad, (app::Toad * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729990, Toad_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AFBA70, void, ctor, (app::Toad * this_ptr))
} // namespace app::classes::Toad
