#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StateMachineBehaviourProxy {
    IL2CPP_REGISTER_METHOD(0x009B53C0, void, add_OnIntEventAction, (app::StateMachineBehaviourProxy * this_ptr, app::Action_1_Int32_ * value))
    IL2CPP_REGISTER_METHOD(0x009B54B0, void, remove_OnIntEventAction, (app::StateMachineBehaviourProxy * this_ptr, app::Action_1_Int32_ * value))
    IL2CPP_REGISTER_METHOD(0x009B55A0, void, add_OnStringEventAction, (app::StateMachineBehaviourProxy * this_ptr, app::Action_1_String_ * value))
    IL2CPP_REGISTER_METHOD(0x009B5690, void, remove_OnStringEventAction, (app::StateMachineBehaviourProxy * this_ptr, app::Action_1_String_ * value))
    IL2CPP_REGISTER_METHOD(0x009B5780, app::StateMachineBehaviourProxy_IReceiver *, get_Receiver, (app::StateMachineBehaviourProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B5810, void, OnValidate, (app::StateMachineBehaviourProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B5900, void, OnEvent, (app::StateMachineBehaviourProxy * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x009B59D0, void, OnStringEvent, (app::StateMachineBehaviourProxy * this_ptr, app::String * event_id))
    IL2CPP_REGISTER_METHOD(0x009B5AA0, void, ctor, (app::StateMachineBehaviourProxy * this_ptr))
}
