#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_Color32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02891D70, bool, Invoke, (app::Predicate_1_UnityEngine_Color32_ * this_ptr, app::Color32 obj))
    IL2CPP_REGISTER_METHOD(0x02A53B90, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_UnityEngine_Color32_ * this_ptr, app::Color32 obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UnityEngine_Color32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_UnityEngine_Color32_
