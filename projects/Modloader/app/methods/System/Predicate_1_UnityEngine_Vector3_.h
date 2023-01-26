#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Predicate_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x0288E680, bool, Invoke, (app::Predicate_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 obj))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_Vector3_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A56D40, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UnityEngine_Vector3_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_UnityEngine_Vector3_
