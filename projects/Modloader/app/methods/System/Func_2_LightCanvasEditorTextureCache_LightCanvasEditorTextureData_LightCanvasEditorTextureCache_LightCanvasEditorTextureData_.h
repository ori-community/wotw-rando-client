#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04752410, Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02883150, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData, Invoke, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData arg))
    IL2CPP_REGISTER_METHOD(0x02883CE0, app::IAsyncResult*, BeginInvoke, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028830F0, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData, EndInvoke, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_
