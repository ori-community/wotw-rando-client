#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::System::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FAA510, app::Vector4, Invoke, (app::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_ * this_ptr, app::Vector4 arg1, app::Vector4 arg2, float arg3))
    IL2CPP_REGISTER_METHOD(0x02FAABE0, app::IAsyncResult*, BeginInvoke, (app::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_ * this_ptr, app::Vector4 arg1, app::Vector4 arg2, float arg3, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Vector4, EndInvoke, (app::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_
