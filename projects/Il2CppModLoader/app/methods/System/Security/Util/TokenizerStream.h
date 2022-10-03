#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Util::TokenizerStream {
    IL2CPP_REGISTER_METHOD(0x01E24D80, void, ctor, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E24FB0, void, AddToken, (app::TokenizerStream * this_ptr, int16_t token))
    IL2CPP_REGISTER_METHOD(0x01E251B0, void, AddString, (app::TokenizerStream * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x01E253E0, void, Reset, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E25400, int16_t, GetNextFullToken, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E25490, int16_t, GetNextToken, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E254B0, app::String*, GetNextString, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E25540, void, ThrowAwayNextString, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E25550, void, TagLastToken, (app::TokenizerStream * this_ptr, int16_t tag))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetTokenCount, (app::TokenizerStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E25610, void, GoToPosition, (app::TokenizerStream * this_ptr, int32_t position))
} // namespace app::classes::System::Security::Util::TokenizerStream
