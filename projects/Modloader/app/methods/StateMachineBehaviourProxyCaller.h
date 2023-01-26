#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateMachineBehaviourProxy_IReceiver.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AnimatorStateInfo.h>
#include <Modloader/app/structs/StateMachineBehaviourProxyCaller.h>

namespace app::classes::StateMachineBehaviourProxyCaller {
    IL2CPP_REGISTER_METHOD(0x009B5F10, app::StateMachineBehaviourProxy_IReceiver*, GetReceiver, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator* animator))
    IL2CPP_REGISTER_METHOD(0x009B60A0, void, OnStateEnter, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x009B6180, void, OnStateUpdate, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x009B6270, void, OnStateExit, (app::StateMachineBehaviourProxyCaller * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::StateMachineBehaviourProxyCaller * this_ptr))
} // namespace app::classes::StateMachineBehaviourProxyCaller
