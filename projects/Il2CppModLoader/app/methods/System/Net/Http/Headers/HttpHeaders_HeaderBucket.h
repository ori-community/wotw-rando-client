#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::HttpHeaders_HeaderBucket {
    IL2CPP_REGISTER_METHOD(0x02D0D6C0, bool, get_HasStringValues, (app::HttpHeaders_HeaderBucket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0D750, app::List_1_System_String_*, get_Values, (app::HttpHeaders_HeaderBucket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0D8B0, app::String*, ParsedToString, (app::HttpHeaders_HeaderBucket * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::HttpHeaders_HeaderBucket
