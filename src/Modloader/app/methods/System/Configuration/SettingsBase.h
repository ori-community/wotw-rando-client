#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsBase.h>
#include <Modloader/app/structs/SettingsContext.h>
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#include <Modloader/app/structs/SettingsProviderCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsBase {
    IL2CPP_REGISTER_METHOD(0x02962950, void, ctor, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962980, app::SettingsContext*, get_Context, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029629B0, bool, get_IsSynchronized, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029629E0, app::Object*, get_Item, app::SettingsBase* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x02962A10, void, set_Item, app::SettingsBase* this_ptr, app::String* property_name, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02962A40, app::SettingsPropertyCollection*, get_Properties, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962A70, app::SettingsPropertyValueCollection*, get_PropertyValues, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962AA0, app::SettingsProviderCollection*, get_Providers, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02962AD0,
        void,
        Initialize,
        app::SettingsBase* this_ptr,
        app::SettingsContext* context,
        app::SettingsPropertyCollection* properties,
        app::SettingsProviderCollection* providers
    )
    IL2CPP_REGISTER_METHOD(0x02962B00, void, Save, app::SettingsBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962B30, app::SettingsBase*, Synchronized, app::SettingsBase* settings_base)
} // namespace app::classes::System::Configuration::SettingsBase
