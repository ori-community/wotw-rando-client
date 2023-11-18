#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateMachineBehaviour.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AnimatorControllerPlayable.h>
#include <Modloader/app/structs/AnimatorStateInfo.h>

namespace app::classes::UnityEngine::StateMachineBehaviour {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::StateMachineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateEnter_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateUpdate_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateExit_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMove_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateIK_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineEnter_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, int32_t state_machine_path_hash))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineExit_1, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, int32_t state_machine_path_hash))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateEnter_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index, app::AnimatorControllerPlayable controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateUpdate_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index, app::AnimatorControllerPlayable controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateExit_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index, app::AnimatorControllerPlayable controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMove_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index, app::AnimatorControllerPlayable controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateIK_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index, app::AnimatorControllerPlayable controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineEnter_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, int32_t state_machine_path_hash, app::AnimatorControllerPlayable controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineExit_2, (app::StateMachineBehaviour * this_ptr, app::Animator* animator, int32_t state_machine_path_hash, app::AnimatorControllerPlayable controller))
} // namespace app::classes::UnityEngine::StateMachineBehaviour
