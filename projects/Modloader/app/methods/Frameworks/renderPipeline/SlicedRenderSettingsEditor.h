#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice__Array.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/SlicedRenderSettingsEditor.h>

namespace app::classes::frameworks::renderPipeline::SlicedRenderSettingsEditor {
    IL2CPP_REGISTER_METHOD(0x00F62DD0, bool, get_IsEnabled, )
    IL2CPP_REGISTER_METHOD(0x00F62F30, bool, get_IsShowingOverride, )
    IL2CPP_REGISTER_METHOD(0x00F63050, app::DepthOfFieldController*, get_DofController, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F63740,
        app::LayeredRenderSettings_LayerParams__Array*,
        GetLayersFromSettings,
        app::SlicedRenderSettingsEditor* this_ptr,
        app::LayeredRenderSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00F63890, app::LayeredRenderSettings*, get_SceneSettings, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F640F0, void, EnsureImguiRegistered, app::SlicedRenderSettingsEditor* this_ptr, bool registered)
    IL2CPP_REGISTER_METHOD(0x00F641F0, void, RestoreOriginals_1, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F643F0,
        void,
        CopyDebugSlices,
        app::SlicedRenderSettingsEditor* this_ptr,
        app::MoonRenderPipelineDebug_Slice__Array* source,
        app::MoonRenderPipelineDebug_Slice__Array* dest
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreOriginals_2, app::SlicedRenderSettingsEditor* this_ptr, app::SceneSettingsComponent* scene_settings_comp)
    IL2CPP_REGISTER_METHOD(0x00F64690, void, RestoreOriginals_3, app::SlicedRenderSettingsEditor* this_ptr, app::DepthOfFieldController* dof_controller)
    IL2CPP_REGISTER_METHOD(0x00F64890, void, RestoreTweaks_1, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreTweaks_2, app::SlicedRenderSettingsEditor* this_ptr, app::SceneSettingsComponent* scene_settings_comp)
    IL2CPP_REGISTER_METHOD(0x00F64B40, void, RestoreTweaks_3, app::SlicedRenderSettingsEditor* this_ptr, app::DepthOfFieldController* dof_controller)
    IL2CPP_REGISTER_METHOD(0x00F64CB0, void, Awake, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F64E60, void, OnDestroy, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F64F80, void, CreateLineMaterial, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F65120, void, _updateUI, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F65180, void, OnEnable, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F653C0, void, OnDisable, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F65610, void, OnEndOfFrame, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F65620, void, Update, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F65710, void, FixedUpdate, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F66800, void, DrawBlurValue, app::SlicedRenderSettingsEditor* this_ptr, float value, float x, bool clipped, bool selected)
    IL2CPP_REGISTER_METHOD(0x00F66AA0, void, DrawDepthValue, app::SlicedRenderSettingsEditor* this_ptr, float value, float x, bool selected)
    IL2CPP_REGISTER_METHOD(0x00F66C50, void, DrawSliceRes, app::SlicedRenderSettingsEditor* this_ptr, float value, float x)
    IL2CPP_REGISTER_METHOD(0x00F66D70, void, DrawDownscaleValue, app::SlicedRenderSettingsEditor* this_ptr, float value, float x, bool clipped, bool selected)
    IL2CPP_REGISTER_METHOD(0x00F67020, void, Draw, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F68200, void, DrawDrsValues, app::SlicedRenderSettingsEditor* this_ptr, float x, float y)
    IL2CPP_REGISTER_METHOD(0x00F684C0, void, Show, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F68520, void, Hide, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F68580, float, ToXCoordinate, app::SlicedRenderSettingsEditor* this_ptr, float x)
    IL2CPP_REGISTER_METHOD(0x00F68590, float, ToYCoordinate, app::SlicedRenderSettingsEditor* this_ptr, float y)
    IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRectAbsolute, app::SlicedRenderSettingsEditor* this_ptr, float x1, float y1, float x2, float y2)
    IL2CPP_REGISTER_METHOD(0x00F685A0, void, DrawRect, app::SlicedRenderSettingsEditor* this_ptr, float x1, float y1, float x2, float y2)
    IL2CPP_REGISTER_METHOD(
        0x00F68680,
        void,
        DrawIntWithBackground,
        app::SlicedRenderSettingsEditor* this_ptr,
        int32_t value,
        app::Color background_color,
        app::Color text_color,
        int32_t x,
        int32_t y,
        bool fakefloat
    )
    IL2CPP_REGISTER_METHOD(0x00F69030, void, DrawMinus, app::SlicedRenderSettingsEditor* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x00F690B0, void, DrawNumber, app::SlicedRenderSettingsEditor* this_ptr, int32_t x, int32_t y, int32_t num, bool is_leading)
    IL2CPP_REGISTER_METHOD(0x00F692F0, void, DrawDot, app::SlicedRenderSettingsEditor* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x00F69370, void, SuspendGameplay, )
    IL2CPP_REGISTER_METHOD(0x00F694B0, void, ResumeGameplay, )
    IL2CPP_REGISTER_METHOD(0x00F695F0, void, ctor, app::SlicedRenderSettingsEditor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F69AA0, void, cctor, )
} // namespace app::classes::frameworks::renderPipeline::SlicedRenderSettingsEditor
