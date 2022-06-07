#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::Parser_Uri {
    IL2CPP_REGISTER_METHOD(0x02D131B0, bool, TryParse, (app::String * input, app::Uri * * result))
    IL2CPP_REGISTER_METHODINFO(0x0478E890, Parser_Uri_TryParse__MethodInfo)
}
