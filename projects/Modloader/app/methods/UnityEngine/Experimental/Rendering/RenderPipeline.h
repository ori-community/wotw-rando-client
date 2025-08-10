#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_Camera_.h>
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/RenderPipeline.h>
#include <Modloader/app/structs/ScriptableRenderContext.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RenderPipeline {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RenderPipeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02434710, void, add_beginCameraRendering, app::Action_1_UnityEngine_Camera_* value)
    IL2CPP_REGISTER_METHOD(0x02434810, void, remove_beginCameraRendering, app::Action_1_UnityEngine_Camera_* value)
    IL2CPP_REGISTER_METHOD(0x02434910, void, Render, app::RenderPipeline* this_ptr, app::ScriptableRenderContext render_context, app::Camera__Array* cameras)
    IL2CPP_REGISTER_METHOD(0x01F19AD0, bool, get_disposed, app::RenderPipeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_disposed, app::RenderPipeline* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, Dispose, app::RenderPipeline* this_ptr)
} // namespace app::classes::UnityEngine::Experimental::Rendering::RenderPipeline
