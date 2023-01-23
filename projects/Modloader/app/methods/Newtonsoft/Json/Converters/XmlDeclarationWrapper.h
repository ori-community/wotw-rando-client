#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlDeclarationWrapper.h>
#include <Modloader/app/structs/XmlDeclaration.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Converters::XmlDeclarationWrapper {
    IL2CPP_REGISTER_METHOD(0x01A59FC0, void, ctor, (app::XmlDeclarationWrapper * this_ptr, app::XmlDeclaration* declaration))
    IL2CPP_REGISTER_METHOD(0x01A59FD0, app::String*, get_Version, (app::XmlDeclarationWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59FF0, app::String*, get_Encoding, (app::XmlDeclarationWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A5A010, app::String*, get_Standalone, (app::XmlDeclarationWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XmlDeclarationWrapper
