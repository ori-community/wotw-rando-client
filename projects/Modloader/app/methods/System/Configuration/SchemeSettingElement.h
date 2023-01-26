#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemeSettingElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/GenericUriParserOptions__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SchemeSettingElement {
    IL2CPP_REGISTER_METHOD(0x02961FF0, void, ctor, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962020, app::GenericUriParserOptions__Enum, get_GenericUriParserOptions, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962050, app::String*, get_Name, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962080, app::ConfigurationPropertyCollection*, get_Properties, (app::SchemeSettingElement * this_ptr))
} // namespace app::classes::System::Configuration::SchemeSettingElement
