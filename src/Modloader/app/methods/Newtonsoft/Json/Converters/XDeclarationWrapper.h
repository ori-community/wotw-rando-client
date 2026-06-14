#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XDeclaration.h>
#include <Modloader/app/structs/XDeclarationWrapper.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>

namespace app::classes::Newtonsoft::Json::Converters::XDeclarationWrapper {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XDeclaration*, get_Declaration, app::XDeclarationWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B701F0, void, ctor, app::XDeclarationWrapper* this_ptr, app::XDeclaration* declaration)
    IL2CPP_REGISTER_METHOD(0x007EC3F0, app::XmlNodeType__Enum, get_NodeType, app::XDeclarationWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B0F0, app::String*, get_Version, app::XDeclarationWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E0120, app::String*, get_Encoding, app::XDeclarationWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0195B0D0, app::String*, get_Standalone, app::XDeclarationWrapper* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::XDeclarationWrapper
