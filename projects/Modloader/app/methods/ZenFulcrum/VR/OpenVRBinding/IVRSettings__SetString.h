#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRSettingsError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSettings_SetString.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetString {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSettings_SetString* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02AC84C0,
        void,
        Invoke,
        app::IVRSettings_SetString* this_ptr,
        app::String* pch_section,
        app::String* pch_settings_key,
        app::String* pch_value,
        app::EVRSettingsError__Enum* pe_error
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE9910,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSettings_SetString* this_ptr,
        app::String* pch_section,
        app::String* pch_settings_key,
        app::String* pch_value,
        app::EVRSettingsError__Enum* pe_error,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, app::IVRSettings_SetString* this_ptr, app::EVRSettingsError__Enum* pe_error, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetString
