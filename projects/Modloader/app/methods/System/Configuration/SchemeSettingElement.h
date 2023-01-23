#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SchemeSettingElement.h>
#include <Modloader/app/structs/GenericUriParserOptions__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Configuration::SchemeSettingElement {
    IL2CPP_REGISTER_METHOD(0x02961FF0, void, ctor, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A8F8, SchemeSettingElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962020, app::GenericUriParserOptions__Enum, get_GenericUriParserOptions, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756E88, SchemeSettingElement_get_GenericUriParserOptions__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962050, app::String*, get_Name, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477DC70, SchemeSettingElement_get_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962080, app::ConfigurationPropertyCollection*, get_Properties, (app::SchemeSettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775078, SchemeSettingElement_get_Properties__MethodInfo)
} // namespace app::classes::System::Configuration::SchemeSettingElement
