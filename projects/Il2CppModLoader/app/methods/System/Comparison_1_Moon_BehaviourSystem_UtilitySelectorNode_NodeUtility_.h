#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x047920C0, Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ * this_ptr, app::UtilitySelectorNode_NodeUtility x, app::UtilitySelectorNode_NodeUtility y))
    IL2CPP_REGISTER_METHOD(0x02B8AA90, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ * this_ptr, app::UtilitySelectorNode_NodeUtility x, app::UtilitySelectorNode_NodeUtility y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ * this_ptr, app::IAsyncResult * result))
}
