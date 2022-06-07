#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02883760, app::Object *, Invoke, (app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_ * this_ptr, app::InstantiateDebugUtility_InstanceInfo arg))
    IL2CPP_REGISTER_METHOD(0x02883C10, app::IAsyncResult *, BeginInvoke, (app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_ * this_ptr, app::InstantiateDebugUtility_InstanceInfo arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_Object_ * this_ptr, app::IAsyncResult * result))
}
