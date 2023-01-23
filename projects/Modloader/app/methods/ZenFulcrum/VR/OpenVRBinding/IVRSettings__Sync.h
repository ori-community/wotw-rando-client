#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRSettings_Sync.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRSettingsError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__Sync {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_Sync * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE9A00, bool, Invoke, (app::IVRSettings_Sync * this_ptr, bool b_force, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE9D80, app::IAsyncResult*, BeginInvoke, (app::IVRSettings_Sync * this_ptr, bool b_force, app::EVRSettingsError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSettings_Sync * this_ptr, app::EVRSettingsError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__Sync
