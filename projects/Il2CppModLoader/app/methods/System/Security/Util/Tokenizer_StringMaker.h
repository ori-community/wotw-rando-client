#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Util::Tokenizer_StringMaker {
    IL2CPP_REGISTER_METHOD(0x01E24600, uint32_t, HashString, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x01E24730, uint32_t, HashCharArray, (app::Char__Array * a, int32_t l))
    IL2CPP_REGISTER_METHOD(0x01E24790, void, ctor, (app::Tokenizer_StringMaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E24840, bool, CompareStringAndChars, (app::Tokenizer_StringMaker * this_ptr, app::String* str, app::Char__Array* a, int32_t l))
    IL2CPP_REGISTER_METHOD(0x01E248E0, app::String*, MakeString, (app::Tokenizer_StringMaker * this_ptr))
} // namespace app::classes::System::Security::Util::Tokenizer_StringMaker
