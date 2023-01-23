#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476CCD0, Func_2_UnityEngine_Vector3_UnityEngine_Vector3___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA39A0, app::Vector3, Invoke, (app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::Vector3 arg))
    IL2CPP_REGISTER_METHODINFO(0x04766290, Func_2_UnityEngine_Vector3_UnityEngine_Vector3__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA3EC0, app::IAsyncResult*, BeginInvoke, (app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::Vector3 arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x02882410, app::Vector3, EndInvoke, (app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_
