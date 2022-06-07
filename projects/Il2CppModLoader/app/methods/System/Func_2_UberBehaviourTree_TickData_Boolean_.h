#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_UberBehaviourTree_TickData_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UberBehaviourTree_TickData_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0474B130, Func_2_UberBehaviourTree_TickData_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Func_2_UberBehaviourTree_TickData_Boolean_ * this_ptr, app::TickData arg))
    IL2CPP_REGISTER_METHODINFO(0x04774CC0, Func_2_UberBehaviourTree_TickData_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA2470, app::IAsyncResult *, BeginInvoke, (app::Func_2_UberBehaviourTree_TickData_Boolean_ * this_ptr, app::TickData arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_UberBehaviourTree_TickData_Boolean_ * this_ptr, app::IAsyncResult * result))
}
