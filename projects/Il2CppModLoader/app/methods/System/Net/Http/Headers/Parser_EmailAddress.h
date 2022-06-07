#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::Parser_EmailAddress {
    IL2CPP_REGISTER_METHOD(0x02D124D0, bool, TryParse, (app::String * input, app::String * * result))
    IL2CPP_REGISTER_METHODINFO(0x04759F28, Parser_EmailAddress_TryParse__MethodInfo)
}
