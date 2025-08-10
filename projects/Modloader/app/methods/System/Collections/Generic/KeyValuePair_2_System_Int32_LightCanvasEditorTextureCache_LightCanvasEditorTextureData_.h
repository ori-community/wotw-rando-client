#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Boxed.h>
#include <Modloader/app/structs/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(
        0x001503C0,
        void,
        ctor,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Boxed* this_ptr,
        int32_t key,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value
    )
    IL2CPP_REGISTER_METHOD(
        0x0010E170,
        int32_t,
        get_Key,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0014FE20,
        app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData,
        get_Value,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001503E0,
        app::String*,
        ToString,
        app::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_
