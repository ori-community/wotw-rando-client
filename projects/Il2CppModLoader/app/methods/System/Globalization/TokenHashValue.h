#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Globalization::TokenHashValue {
    IL2CPP_REGISTER_METHOD(0x01DF8C80, void, ctor, (app::TokenHashValue * this_ptr, app::String* token_string, app::TokenType__Enum token_type, int32_t token_value))
}
