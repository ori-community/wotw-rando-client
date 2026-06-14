#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsPropertyValue.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsPropertyValueCollection {
    IL2CPP_REGISTER_METHOD(0x01FFDDB0, void, ctor, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDDE0, int32_t, get_Count, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDE10, bool, get_IsSynchronized, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDE40, app::SettingsPropertyValue*, get_Item, app::SettingsPropertyValueCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FFDE70, app::Object*, get_SyncRoot, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDEA0, void, Add, app::SettingsPropertyValueCollection* this_ptr, app::SettingsPropertyValue* property)
    IL2CPP_REGISTER_METHOD(0x01FFDED0, void, Clear, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDF00, app::Object*, Clone, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDF30, void, CopyTo, app::SettingsPropertyValueCollection* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FFDF60, app::IEnumerator*, GetEnumerator, app::SettingsPropertyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDF90, void, Remove, app::SettingsPropertyValueCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FFDFC0, void, SetReadOnly, app::SettingsPropertyValueCollection* this_ptr)
} // namespace app::classes::System::Configuration::SettingsPropertyValueCollection
