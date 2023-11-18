#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOverrideSettings.h>
#include <Modloader/app/structs/GameParameters.h>
#include <Modloader/app/structs/NameOptions_NameDatabase.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReplayValidatorData.h>
#include <Modloader/app/structs/RuntimeBuildInformation.h>
#include <Modloader/app/structs/SwitchController_VibrationData.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>
#include <Modloader/app/structs/XAchievements.h>

namespace app::classes::UnityEngine::JsonUtility {
    IL2CPP_REGISTER_METHOD(0x031C2D00, app::String*, ToJsonInternal, (app::Object * obj, bool pretty_print))
    IL2CPP_REGISTER_METHOD(0x031C2D60, app::Object*, FromJsonInternal, (app::String * json, app::Object* object_to_overwrite, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00C4CBF0, app::String*, ToJson_1, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x031C2DD0, app::String*, ToJson_2, (app::Object * obj, bool pretty_print))
    IL2CPP_REGISTER_METHOD(0x031C2FA0, app::Object*, FromJson_1, (app::String * json, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x031C3150, void, FromJsonOverwrite, (app::String * json, app::Object* object_to_overwrite))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::Object*, FromJson_2, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::AkWwiseInitializationSettings_WwiseOverrideSettings*, FromJson_3, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings*, FromJson_4, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::GameParameters*, FromJson_5, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::ReplayValidatorData*, FromJson_6, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::NameOptions_NameDatabase*, FromJson_7, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::RuntimeBuildInformation*, FromJson_8, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::XAchievements*, FromJson_9, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::UberPoolPerfTest_Settings*, FromJson_10, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::SwitchController_VibrationData*, FromJson_11, (app::String * json))
} // namespace app::classes::UnityEngine::JsonUtility
