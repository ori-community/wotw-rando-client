#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::System::Predicate_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_Quaternion_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288F670, bool, Invoke, (app::Predicate_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion obj))
    IL2CPP_REGISTER_METHOD(0x02A55950, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UnityEngine_Quaternion_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_UnityEngine_Quaternion_
