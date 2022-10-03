#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::IriParsingElement {
    IL2CPP_REGISTER_METHOD(0x02961C60, void, ctor, (app::IriParsingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047510B8, IriParsingElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961C90, bool, get_Enabled, (app::IriParsingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A1D0, IriParsingElement_get_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961CC0, void, set_Enabled, (app::IriParsingElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047948B8, IriParsingElement_set_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961CF0, app::ConfigurationPropertyCollection*, get_Properties, (app::IriParsingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047428C8, IriParsingElement_get_Properties__MethodInfo)
} // namespace app::classes::System::Configuration::IriParsingElement
