#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IriParsingElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Configuration::IriParsingElement {
    IL2CPP_REGISTER_METHOD(0x02961C60, void, ctor, (app::IriParsingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961C90, bool, get_Enabled, (app::IriParsingElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02961CC0, void, set_Enabled, (app::IriParsingElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02961CF0, app::ConfigurationPropertyCollection*, get_Properties, (app::IriParsingElement * this_ptr))
} // namespace app::classes::System::Configuration::IriParsingElement
