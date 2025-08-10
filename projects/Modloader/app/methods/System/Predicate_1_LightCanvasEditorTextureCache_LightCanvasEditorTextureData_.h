#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_.h>

namespace app::classes::System::Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x0288D9D0,
        bool,
        Invoke,
        app::Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x0288FCF0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x008A1BF0,
        bool,
        EndInvoke,
        app::Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Predicate_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_
