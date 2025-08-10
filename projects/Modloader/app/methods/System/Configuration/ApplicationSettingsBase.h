#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ApplicationSettingsBase.h>
#include <Modloader/app/structs/CancelEventArgs.h>
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#include <Modloader/app/structs/SettingChangingEventHandler.h>
#include <Modloader/app/structs/SettingsContext.h>
#include <Modloader/app/structs/SettingsLoadedEventArgs.h>
#include <Modloader/app/structs/SettingsLoadedEventHandler.h>
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#include <Modloader/app/structs/SettingsProviderCollection.h>
#include <Modloader/app/structs/SettingsSavingEventHandler.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::ApplicationSettingsBase {
    IL2CPP_REGISTER_METHOD(0x02961000, void, ctor_1, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961030, void, ctor_2, app::ApplicationSettingsBase* this_ptr, app::IComponent* owner)
    IL2CPP_REGISTER_METHOD(0x02961060, void, ctor_3, app::ApplicationSettingsBase* this_ptr, app::IComponent* owner, app::String* settings_key)
    IL2CPP_REGISTER_METHOD(0x02961090, void, ctor_4, app::ApplicationSettingsBase* this_ptr, app::String* settings_key)
    IL2CPP_REGISTER_METHOD(0x029610C0, app::SettingsContext*, get_Context, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029610F0, app::Object*, get_Item, app::ApplicationSettingsBase* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x02961120, void, set_Item, app::ApplicationSettingsBase* this_ptr, app::String* property_name, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02961150, app::SettingsPropertyCollection*, get_Properties, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961180, app::SettingsPropertyValueCollection*, get_PropertyValues, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029611B0, app::SettingsProviderCollection*, get_Providers, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029611E0, app::String*, get_SettingsKey, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961210, void, set_SettingsKey, app::ApplicationSettingsBase* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02961240, void, add_PropertyChanged, app::ApplicationSettingsBase* this_ptr, app::PropertyChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02961270, void, remove_PropertyChanged, app::ApplicationSettingsBase* this_ptr, app::PropertyChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x029612A0, void, add_SettingChanging, app::ApplicationSettingsBase* this_ptr, app::SettingChangingEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x029612D0, void, remove_SettingChanging, app::ApplicationSettingsBase* this_ptr, app::SettingChangingEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02961300, void, add_SettingsLoaded, app::ApplicationSettingsBase* this_ptr, app::SettingsLoadedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02961330, void, remove_SettingsLoaded, app::ApplicationSettingsBase* this_ptr, app::SettingsLoadedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02961360, void, add_SettingsSaving, app::ApplicationSettingsBase* this_ptr, app::SettingsSavingEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x02961390, void, remove_SettingsSaving, app::ApplicationSettingsBase* this_ptr, app::SettingsSavingEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x029613C0, app::Object*, GetPreviousVersion, app::ApplicationSettingsBase* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x029613F0, void, OnPropertyChanged, app::ApplicationSettingsBase* this_ptr, app::Object* sender, app::PropertyChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x02961420, void, OnSettingChanging, app::ApplicationSettingsBase* this_ptr, app::Object* sender, app::SettingChangingEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x02961450, void, OnSettingsLoaded, app::ApplicationSettingsBase* this_ptr, app::Object* sender, app::SettingsLoadedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x02961480, void, OnSettingsSaving, app::ApplicationSettingsBase* this_ptr, app::Object* sender, app::CancelEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x029614B0, void, Reload, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029614E0, void, Reset, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961510, void, Save, app::ApplicationSettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961540, void, Upgrade, app::ApplicationSettingsBase* this_ptr)
} // namespace app::classes::System::Configuration::ApplicationSettingsBase
