#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsProperty.h>
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsPropertyCollection {
    IL2CPP_REGISTER_METHOD(0x02963130, void, ctor, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02963160, int32_t, get_Count, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02963190, bool, get_IsSynchronized, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029631C0, app::SettingsProperty*, get_Item, app::SettingsPropertyCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x029631F0, app::Object*, get_SyncRoot, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02963220, void, Add, app::SettingsPropertyCollection* this_ptr, app::SettingsProperty* property)
    IL2CPP_REGISTER_METHOD(0x02963250, void, Clear, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02963280, app::Object*, Clone, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029632B0, void, CopyTo, app::SettingsPropertyCollection* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x029632E0, app::IEnumerator*, GetEnumerator, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02963310, void, OnAdd, app::SettingsPropertyCollection* this_ptr, app::SettingsProperty* property)
    IL2CPP_REGISTER_METHOD(0x02963340, void, OnAddComplete, app::SettingsPropertyCollection* this_ptr, app::SettingsProperty* property)
    IL2CPP_REGISTER_METHOD(0x02963370, void, OnClear, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029633A0, void, OnClearComplete, app::SettingsPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029633D0, void, OnRemove, app::SettingsPropertyCollection* this_ptr, app::SettingsProperty* property)
    IL2CPP_REGISTER_METHOD(0x02963400, void, OnRemoveComplete, app::SettingsPropertyCollection* this_ptr, app::SettingsProperty* property)
    IL2CPP_REGISTER_METHOD(0x02963430, void, Remove, app::SettingsPropertyCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02963460, void, SetReadOnly, app::SettingsPropertyCollection* this_ptr)
} // namespace app::classes::System::Configuration::SettingsPropertyCollection
