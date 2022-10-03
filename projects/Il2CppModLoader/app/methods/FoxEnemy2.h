#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FoxEnemy2 {
    IL2CPP_REGISTER_METHOD(0x01283220, void, Awake, (app::FoxEnemy2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01283490, void, Start, (app::FoxEnemy2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012834A0, void, FixedUpdate, (app::FoxEnemy2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01283A50, void, TestJumpAttack, (app::FoxEnemy2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01283C70, void, FoxGrabber_Receiver_OnGrabbed, (app::FoxEnemy2 * this_ptr, app::IPinnable* pinnable))
    IL2CPP_REGISTER_METHOD(0x01283DF0, void, StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourEnter, (app::FoxEnemy2 * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x01284390, void, StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourUpdate, (app::FoxEnemy2 * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x012847B0, void, StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourExit, (app::FoxEnemy2 * this_ptr, app::Animator* animator, app::AnimatorStateInfo state_info, int32_t layer_index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StateMachineBehaviourProxy_IReceiver_OnAnimationEvent_1, (app::FoxEnemy2 * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StateMachineBehaviourProxy_IReceiver_OnAnimationEvent_2, (app::FoxEnemy2 * this_ptr, app::String* event_id))
    IL2CPP_REGISTER_METHOD(0x012849D0, void, ctor, (app::FoxEnemy2 * this_ptr))
} // namespace app::classes::FoxEnemy2
