#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICullingCategoryManager.h>
#include <Modloader/app/structs/MoonRenderPipelineView_c.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineView___c {
    IL2CPP_REGISTER_METHOD(0x00EACFD0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonRenderPipelineView_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EAD110,
        app::RendererCullingCategoryParameters,
        __cctor_b__340_0,
        app::MoonRenderPipelineView_c* this_ptr,
        app::ICullingCategoryManager* m
    )
    IL2CPP_REGISTER_METHOD(0x00EAD1A0, app::String*, __cctor_b__340_1, app::MoonRenderPipelineView_c* this_ptr, app::ICullingCategoryManager* m)
    IL2CPP_REGISTER_METHOD(
        0x00EAD260,
        app::RendererCullingCategoryParameters,
        __cctor_b__340_2,
        app::MoonRenderPipelineView_c* this_ptr,
        app::ICullingCategoryManager* m
    )
    IL2CPP_REGISTER_METHOD(0x00EAD2F0, app::String*, __cctor_b__340_3, app::MoonRenderPipelineView_c* this_ptr, app::ICullingCategoryManager* m)
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineView___c
