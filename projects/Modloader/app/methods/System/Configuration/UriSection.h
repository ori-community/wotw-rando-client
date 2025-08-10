#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/IdnElement.h>
#include <Modloader/app/structs/IriParsingElement.h>
#include <Modloader/app/structs/SchemeSettingElementCollection.h>
#include <Modloader/app/structs/UriSection.h>

namespace app::classes::System::Configuration::UriSection {
    IL2CPP_REGISTER_METHOD(0x01FFE320, void, ctor, app::UriSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFE350, app::IdnElement*, get_Idn, app::UriSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFE380, app::IriParsingElement*, get_IriParsing, app::UriSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFE3B0, app::ConfigurationPropertyCollection*, get_Properties, app::UriSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFE3E0, app::SchemeSettingElementCollection*, get_SchemeSettings, app::UriSection* this_ptr)
} // namespace app::classes::System::Configuration::UriSection
