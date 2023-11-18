#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsProviderAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Configuration::SettingsProviderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::SettingsProviderAttribute * this_ptr, app::String* provider_type_name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::SettingsProviderAttribute * this_ptr, app::Type* provider_type))
    IL2CPP_REGISTER_METHOD(0x01FFE0E0, app::String*, get_ProviderTypeName, (app::SettingsProviderAttribute * this_ptr))
} // namespace app::classes::System::Configuration::SettingsProviderAttribute
