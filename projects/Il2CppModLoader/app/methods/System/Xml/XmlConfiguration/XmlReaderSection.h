#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::XmlConfiguration::XmlReaderSection {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ProhibitDefaultUrlResolver, ())
    IL2CPP_REGISTER_METHOD(0x01960A70, app::XmlResolver*, CreateDefaultResolver, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CollapseWhiteSpaceIntoEmptyString, ())
} // namespace app::classes::System::Xml::XmlConfiguration::XmlReaderSection
