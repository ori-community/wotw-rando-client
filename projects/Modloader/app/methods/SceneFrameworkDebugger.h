#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SceneFrameworkDebugger {
    IL2CPP_REGISTER_METHOD(0x00B9D820, app::GUIStyle*, get_LabelStyle, (app::SceneFrameworkDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9DB90, app::SceneFrameworkDebugger*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00B9DC10, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00B9DCC0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00B9DE60, void, EnsureImgui, (app::SceneFrameworkDebugger * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x00B9DF50, void, Awake, (app::SceneFrameworkDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9DFB0, void, OnDestroy, (app::SceneFrameworkDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9DFC0, app::String*, _getColorForBoostMode, (app::SceneFrameworkDebugger * this_ptr, app::LoadingBoostController_BoostModeLevel__Enum level))
    IL2CPP_REGISTER_METHOD(0x00B9DFF0, app::String*, _getColorForSceneState, (app::SceneFrameworkDebugger * this_ptr, app::SceneState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00B9E060, void, BoostModeChangedState, (app::SceneFrameworkDebugger * this_ptr, app::LoadingBoostController_BoostModeLevel__Enum old, app::LoadingBoostController_BoostModeLevel__Enum new_level))
    IL2CPP_REGISTER_METHOD(0x00B9E630, void, SceneStartedLoading, (app::SceneFrameworkDebugger * this_ptr, app::RuntimeSceneMetaData* meta, bool async))
    IL2CPP_REGISTER_METHOD(0x00B9E890, void, SceneChangedState, (app::SceneFrameworkDebugger * this_ptr, app::SceneManagerScene* scene, app::RuntimeSceneMetaData* meta, app::SceneState__Enum old_state, app::SceneState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00B9EEC0, void, ReportSceneExpensiveIntegration, (app::SceneFrameworkDebugger * this_ptr, app::SceneManagerScene* scene, float ms))
    IL2CPP_REGISTER_METHOD(0x00B9F2D0, void, Update, (app::SceneFrameworkDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9F850, void, OnGUI, (app::SceneFrameworkDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9FB40, void, ctor, (app::SceneFrameworkDebugger * this_ptr))
} // namespace app::classes::SceneFrameworkDebugger
