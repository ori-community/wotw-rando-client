#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProviderBase.h>
#include <Modloader/app/structs/SettingsProvider.h>
#include <Modloader/app/structs/SettingsProviderCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsProviderCollection {
    IL2CPP_REGISTER_METHOD(0x01FFE110, void, ctor, app::SettingsProviderCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFE140, app::SettingsProvider*, get_Item, app::SettingsProviderCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FFE170, void, Add, app::SettingsProviderCollection* this_ptr, app::ProviderBase* provider)
} // namespace app::classes::System::Configuration::SettingsProviderCollection
