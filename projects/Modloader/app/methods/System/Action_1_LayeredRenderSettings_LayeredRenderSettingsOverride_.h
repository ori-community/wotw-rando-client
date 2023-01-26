#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D24D50, void, Invoke, (app::Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * this_ptr, app::LayeredRenderSettings_LayeredRenderSettingsOverride obj))
    IL2CPP_REGISTER_METHOD(0x029FE7C0, app::IAsyncResult*, BeginInvoke, (app::Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * this_ptr, app::LayeredRenderSettings_LayeredRenderSettingsOverride obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_LayeredRenderSettings_LayeredRenderSettingsOverride_
