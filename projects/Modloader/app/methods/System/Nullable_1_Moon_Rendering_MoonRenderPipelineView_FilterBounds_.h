#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineView_FilterBounds.h>
#include <Modloader/app/structs/Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_.h>
#include <Modloader/app/structs/Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ {
    IL2CPP_REGISTER_METHOD(0x001F42C0, bool, get_HasValue, app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F5A60,
        app::MoonRenderPipelineView_FilterBounds,
        get_Value,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F42B0,
        void,
        ctor,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr,
        app::MoonRenderPipelineView_FilterBounds value
    )
    IL2CPP_REGISTER_METHOD(0x001F5B60, bool, Equals_1, app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(
        0x001F5BC0,
        bool,
        Equals_2,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F44C0, int32_t, GetHashCode, app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F4590,
        app::MoonRenderPipelineView_FilterBounds,
        GetValueOrDefault_1,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F45B0,
        app::MoonRenderPipelineView_FilterBounds,
        GetValueOrDefault_2,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr,
        app::MoonRenderPipelineView_FilterBounds default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F5C50, app::String*, ToString, app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254F410, app::Object*, Box, app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ o)
    IL2CPP_REGISTER_METHOD(0x0254F4A0, app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_
