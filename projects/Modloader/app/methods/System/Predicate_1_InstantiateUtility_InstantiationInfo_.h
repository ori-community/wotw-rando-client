#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Predicate_1_InstantiateUtility_InstantiationInfo_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Predicate_1_InstantiateUtility_InstantiationInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288D9D0, bool, Invoke, (app::Predicate_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::InstantiateUtility_InstantiationInfo obj))
    IL2CPP_REGISTER_METHOD(0x0288F330, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::InstantiateUtility_InstantiationInfo obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_InstantiateUtility_InstantiationInfo_
