#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::Parser_Host {
    IL2CPP_REGISTER_METHOD(0x02D12710, bool, TryParse, (app::String * input, app::String** result))
    IL2CPP_REGISTER_METHODINFO(0x0477F050, Parser_Host_TryParse__MethodInfo)
} // namespace app::classes::System::Net::Http::Headers::Parser_Host
