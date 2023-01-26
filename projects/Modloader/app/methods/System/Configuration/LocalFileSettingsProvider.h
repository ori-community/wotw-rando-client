#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalFileSettingsProvider.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/SettingsContext.h>
#include <Modloader/app/structs/SettingsProperty.h>
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#include <Modloader/app/structs/SettingsPropertyValue.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::LocalFileSettingsProvider {
    IL2CPP_REGISTER_METHOD(0x02961D20, void, ctor, (app::LocalFileSettingsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961D50, app::String*, get_ApplicationName, (app::LocalFileSettingsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961D80, void, set_ApplicationName, (app::LocalFileSettingsProvider * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02961DB0, app::SettingsPropertyValue*, GetPreviousVersion, (app::LocalFileSettingsProvider * this_ptr, app::SettingsContext* context, app::SettingsProperty* property))
    IL2CPP_REGISTER_METHOD(0x02961DE0, app::SettingsPropertyValueCollection*, GetPropertyValues, (app::LocalFileSettingsProvider * this_ptr, app::SettingsContext* context, app::SettingsPropertyCollection* properties))
    IL2CPP_REGISTER_METHOD(0x02961E10, void, Initialize, (app::LocalFileSettingsProvider * this_ptr, app::String* name, app::NameValueCollection* values))
    IL2CPP_REGISTER_METHOD(0x02961E40, void, Reset, (app::LocalFileSettingsProvider * this_ptr, app::SettingsContext* context))
    IL2CPP_REGISTER_METHOD(0x02961E70, void, SetPropertyValues, (app::LocalFileSettingsProvider * this_ptr, app::SettingsContext* context, app::SettingsPropertyValueCollection* values))
    IL2CPP_REGISTER_METHOD(0x02961EA0, void, Upgrade, (app::LocalFileSettingsProvider * this_ptr, app::SettingsContext* context, app::SettingsPropertyCollection* properties))
} // namespace app::classes::System::Configuration::LocalFileSettingsProvider
