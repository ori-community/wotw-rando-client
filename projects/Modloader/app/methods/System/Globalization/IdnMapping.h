#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IdnMapping.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Globalization::IdnMapping {
    IL2CPP_REGISTER_METHOD(0x026168E0, void, ctor, app::IdnMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02616A60, bool, Equals, app::IdnMapping* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02616B20, int32_t, GetHashCode, app::IdnMapping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02616B40, app::String*, GetAscii_1, app::IdnMapping* this_ptr, app::String* unicode)
    IL2CPP_REGISTER_METHOD(0x02616CC0, app::String*, GetAscii_2, app::IdnMapping* this_ptr, app::String* unicode, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02616E30, app::String*, Convert, app::IdnMapping* this_ptr, app::String* input, int32_t index, int32_t count, bool to_ascii)
    IL2CPP_REGISTER_METHOD(0x026170D0, app::String*, ToAscii, app::IdnMapping* this_ptr, app::String* s, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x02617550, void, VerifyLength, app::IdnMapping* this_ptr, app::String* s, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x026176A0, app::String*, NamePrep, app::IdnMapping* this_ptr, app::String* s, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x02617820, void, VerifyProhibitedCharacters, app::IdnMapping* this_ptr, app::String* s, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x02617A60, void, VerifyStd3AsciiRules, app::IdnMapping* this_ptr, app::String* s, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x02617CC0, app::String*, GetUnicode_1, app::IdnMapping* this_ptr, app::String* ascii)
    IL2CPP_REGISTER_METHOD(0x02617E40, app::String*, GetUnicode_2, app::IdnMapping* this_ptr, app::String* ascii, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02617FB0, app::String*, ToUnicode, app::IdnMapping* this_ptr, app::String* s, int32_t offset)
} // namespace app::classes::System::Globalization::IdnMapping
