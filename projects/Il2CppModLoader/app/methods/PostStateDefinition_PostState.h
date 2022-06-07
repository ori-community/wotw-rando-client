#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PostStateDefinition_PostState {
    IL2CPP_REGISTER_METHOD(0x00C6A760, app::CameraSettings *, get_Settings, (app::PostStateDefinition_PostState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Weight, (app::PostStateDefinition_PostState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::PostProcessInfluencerOrder__Enum, get_PostInfluenceApplyOrder, (app::PostStateDefinition_PostState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::SceneRoot *, get_SceneRoot, (app::PostStateDefinition_PostState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_SceneRoot, (app::PostStateDefinition_PostState * this_ptr, app::SceneRoot * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::CameraSettingsAsset *, get_SettingsAssetForDebug, (app::PostStateDefinition_PostState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PostStateDefinition_PostState * this_ptr))
}
