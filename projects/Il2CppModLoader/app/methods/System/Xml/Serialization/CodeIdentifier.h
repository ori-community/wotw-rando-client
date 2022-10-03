#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::CodeIdentifier {
    IL2CPP_REGISTER_METHOD(0x01C8D190, app::String*, MakePascal, (app::String * identifier))
    IL2CPP_REGISTER_METHOD(0x01C8D390, app::String*, MakeValid, (app::String * identifier))
    IL2CPP_REGISTER_METHOD(0x01C8D5F0, bool, IsValidStart, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x01C8D690, bool, IsValid, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x01C8D780, void, cctor, ())
} // namespace app::classes::System::Xml::Serialization::CodeIdentifier
