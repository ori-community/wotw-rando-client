#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Object_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::System::Action_2_Object_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C13110, void, Invoke, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::Object* arg1, app::Vector2 arg2))
    IL2CPP_REGISTER_METHOD(0x02C13670, app::IAsyncResult*, BeginInvoke, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::Object* arg1, app::Vector2 arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_2_Object_UnityEngine_Vector2_
