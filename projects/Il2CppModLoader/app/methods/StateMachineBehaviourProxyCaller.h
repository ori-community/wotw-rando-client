#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StateMachineBehaviourProxyCaller {
    IL2CPP_REGISTER_METHOD(0x009B5F10, app::StateMachineBehaviourProxy_IReceiver *, GetReceiver, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator * animator))
    IL2CPP_REGISTER_METHOD(0x009B60A0, void, OnStateEnter, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator * animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x009B6180, void, OnStateUpdate, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator * animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x009B6270, void, OnStateExit, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator * animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::StateMachineBehaviourProxyCaller * this_ptr))
}
