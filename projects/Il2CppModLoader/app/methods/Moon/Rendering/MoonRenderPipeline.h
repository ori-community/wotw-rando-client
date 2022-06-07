#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::MoonRenderPipeline {
    IL2CPP_REGISTER_METHOD(0x007917F0, void, ctor, (app::MoonRenderPipeline * this_ptr, app::MoonRenderPipelineAsset * owner))
    IL2CPP_REGISTER_METHOD(0x00791D00, void, Dispose, (app::MoonRenderPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MoonRenderPipelineView *, get_currentView, (app::MoonRenderPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_currentView, (app::MoonRenderPipeline * this_ptr, app::MoonRenderPipelineView * value))
    IL2CPP_REGISTER_METHOD(0x00791D90, app::MoonRenderPipelineView *, get_gameView, (app::MoonRenderPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00791DD0, app::MoonRenderPipelineView *, get_sceneView, (app::MoonRenderPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00791E10, double, get_currentDRSScale, (app::MoonRenderPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00791E20, double, get_currentDRSScaleY, (app::MoonRenderPipeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00791E30, void, Render, (app::MoonRenderPipeline * this_ptr, app::ScriptableRenderContext context, app::Camera__Array * cameras))
    IL2CPP_REGISTER_METHOD(0x007928E0, app::MoonRenderPipelineViewType__Enum, getViewType, (app::Camera__Array * cameras, app::Camera * * camera))
    IL2CPP_REGISTER_METHOD(0x00792930, void, cctor, ())
}
