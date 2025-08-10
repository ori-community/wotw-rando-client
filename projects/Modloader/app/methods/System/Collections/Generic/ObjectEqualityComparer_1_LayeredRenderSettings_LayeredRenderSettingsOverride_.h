#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0C40,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride x,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0D00,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array* array,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0E90,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array* array,
        app::LayeredRenderSettings_LayeredRenderSettingsOverride value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3E60,
        bool,
        Equals_2,
        app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_
