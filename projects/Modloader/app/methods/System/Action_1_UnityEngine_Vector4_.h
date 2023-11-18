#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::System::Action_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Vector4_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::Action_1_UnityEngine_Vector4_ * this_ptr, app::Vector4 obj))
    IL2CPP_REGISTER_METHOD(0x02C0D220, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_Vector4_ * this_ptr, app::Vector4 obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Vector4_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_Vector4_
