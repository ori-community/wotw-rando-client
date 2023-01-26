#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QualityProfile.h>
#include <Modloader/app/structs/FloatRange.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_XboxResolution__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_Quality__Enum.h>
#include <Modloader/app/structs/RenderScope__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI {
    IL2CPP_REGISTER_METHOD(0x007940D0, app::QualityProfile*, getProfile, (app::MoonRenderPipelineDebugUI * this_ptr, app::MoonRenderPipelineDebugUI_Quality__Enum quality))
    IL2CPP_REGISTER_METHOD(0x00794310, void, Awake, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794690, void, OnEnable, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794790, void, OnDisable, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794820, void, SetDefaultQuality, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007949E0, void, Start, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794A80, void, setQuality, (app::MoonRenderPipelineDebugUI * this_ptr, app::MoonRenderPipelineDebugUI_Quality__Enum quality))
    IL2CPP_REGISTER_METHOD(0x00794C30, void, Update, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794F60, void, FixedUpdate, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794F60, void, updateInput, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00795040, void, OnGUI, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00795200, void, drawContent, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007956F0, void, drawFpsCounter, (app::MoonRenderPipelineDebugUI * this_ptr, bool interactive))
    IL2CPP_REGISTER_METHOD(0x00795A00, void, drawEarlyZInfo, (bool interactive))
    IL2CPP_REGISTER_METHOD(0x00795DF0, void, drawRenderOptions, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0079CFE0, void, DrawDebugPerSceneSettings, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0079D540, void, drawRenderInfo, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0079F250, void, updateTimings, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0079F300, void, drawTimings, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007A0730, void, startTimingCapture, (app::MoonRenderPipelineDebugUI * this_ptr, bool profiler_enabled))
    IL2CPP_REGISTER_METHOD(0x007A07A0, void, updateTimingCapture, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007A1BE0, void, updateFpsCounter, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007A1D40, app::RenderScope__Enum, ui_ToggleField, (app::MoonRenderPipelineDebugUI * this_ptr, app::String* label, app::RenderScope__Enum value))
    IL2CPP_REGISTER_METHOD(0x007A1E40, app::FloatRange, floatRange, (app::String * label, app::FloatRange value, float min, float max))
    IL2CPP_REGISTER_METHOD(0x007A1FC0, bool, beginSection_1, (bool* foldout, app::String* label))
    IL2CPP_REGISTER_METHOD(0x007A2160, void, beginSection_2, ())
    IL2CPP_REGISTER_METHOD(0x007A2290, void, endSection, ())
    IL2CPP_REGISTER_METHOD(0x007A2330, void, beginIndent, (float space))
    IL2CPP_REGISTER_METHOD(0x007A23E0, void, endIndent, ())
    IL2CPP_REGISTER_METHOD(0x007A2400, void, ctor, (app::MoonRenderPipelineDebugUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007A26F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x007A2980, void, _drawRenderInfo_g__resolutionButton_87_0, (app::MoonRenderPipelineAsset_XboxResolution__Enum resolution))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineDebugUI
