#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04715B00, Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02883DB0, int32_t, Invoke, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_ * this_ptr, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData arg))
    IL2CPP_REGISTER_METHOD(0x02884260, app::IAsyncResult*, BeginInvoke, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_ * this_ptr, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_Int32_
