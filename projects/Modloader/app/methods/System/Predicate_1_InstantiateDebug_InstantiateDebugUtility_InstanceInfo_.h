#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Predicate_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288D9D0, bool, Invoke, (app::Predicate_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ * this_ptr, app::InstantiateDebugUtility_InstanceInfo obj))
    IL2CPP_REGISTER_METHOD(0x0288F260, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ * this_ptr, app::InstantiateDebugUtility_InstanceInfo obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_
