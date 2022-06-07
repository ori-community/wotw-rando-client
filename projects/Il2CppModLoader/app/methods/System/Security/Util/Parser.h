#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Util::Parser {
    IL2CPP_REGISTER_METHOD(0x01E21CD0, app::SecurityElement *, GetTopElement, (app::Parser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E21D00, void, GetRequiredSizes, (app::Parser * this_ptr, app::TokenizerStream * stream, int32_t * index))
    IL2CPP_REGISTER_METHODINFO(0x04794370, Parser_GetRequiredSizes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E22510, int32_t, DetermineFormat, (app::Parser * this_ptr, app::TokenizerStream * stream))
    IL2CPP_REGISTER_METHODINFO(0x047364A8, Parser_DetermineFormat__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E227D0, void, ParseContents, (app::Parser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472E460, Parser_ParseContents__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E22E80, void, ctor_1, (app::Parser * this_ptr, app::Tokenizer * t))
    IL2CPP_REGISTER_METHOD(0x01E22FB0, void, ctor_2, (app::Parser * this_ptr, app::String * input))
}
