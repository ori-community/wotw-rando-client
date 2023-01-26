#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSettings_GetFloat.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRSettingsError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetFloat {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_GetFloat * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE6B90, float, Invoke, (app::IVRSettings_GetFloat * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE7100, app::IAsyncResult*, BeginInvoke, (app::IVRSettings_GetFloat * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x02CE71E0, float, EndInvoke, (app::IVRSettings_GetFloat * this_ptr, app::EVRSettingsError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetFloat
