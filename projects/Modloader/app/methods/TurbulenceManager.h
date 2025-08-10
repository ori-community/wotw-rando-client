#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITurbulenceInfluencer.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/TurbulenceManager.h>
#include <Modloader/app/structs/TurbulenceManagerBinder.h>
#include <Modloader/app/structs/TurbulenceSettings.h>

namespace app::classes::TurbulenceManager {
    IL2CPP_REGISTER_METHOD(0x00B153C0, void, OnEnable, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B15470, void, OnEditorEnable, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B15510, void, OnEditorDisable, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B155B0, int32_t, get_InfluencerCount, )
    IL2CPP_REGISTER_METHOD(0x00B15660, app::TurbulenceManagerBinder*, get_Binder, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B157B0, app::SceneSettingsComponent*, get_m_currentSettings, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Renderer*, get_TurbulenceMapRenderer, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B159B0, int32_t, IndexByWeight, app::TurbulenceManager* this_ptr, int32_t count, float weight)
    IL2CPP_REGISTER_METHOD(0x00B15A80, float, get_WorkingTime, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_LegacyTimeLineSpeed, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B15B30, void, set_LegacyTimeLineSpeed, app::TurbulenceManager* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_LegacyTimeLineStrength, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B15B40, void, set_LegacyTimeLineStrength, app::TurbulenceManager* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008556D0, int32_t, get_TimelineSamplePriority, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B15B50, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00B15C30, void, RegisterInfluencer, app::ITurbulenceInfluencer* influencer)
    IL2CPP_REGISTER_METHOD(0x00B15EE0, void, UnregisterInfluencer, app::ITurbulenceInfluencer* influencer)
    IL2CPP_REGISTER_METHOD(0x00B16000, void, ResetTimer, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00B16010,
        float,
        SampleTurbulenceValueAtTime,
        app::TurbulenceManager* this_ptr,
        float strength,
        float speed,
        float time_offset,
        float time
    )
    IL2CPP_REGISTER_METHOD(0x00B16190, float, GetStrengthMultiplier, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B16500, float, GetSpeedMultiplier, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B16870, void, UpdateWithDeltaTime, app::TurbulenceManager* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00B16880, void, Update, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B168E0, void, OnRenderObject, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B16AF0, void, DoUpdate, app::TurbulenceManager* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00B16E90, app::TurbulenceSettings*, GetTurbulenceSettings, app::TurbulenceManager* this_ptr, app::SceneSettings* scene_settings)
    IL2CPP_REGISTER_METHOD(0x00B16F70, void, StopAnimation, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B16F80, void, TimelineSample, app::TurbulenceManager* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterTimelinePreview, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitTimelinePreview, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B16FB0, void, ctor, app::TurbulenceManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B17120, void, cctor, )
} // namespace app::classes::TurbulenceManager
