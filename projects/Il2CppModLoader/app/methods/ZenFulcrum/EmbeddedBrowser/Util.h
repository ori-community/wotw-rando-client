#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Util {
    IL2CPP_REGISTER_METHOD(0x016700E0, bool, SafeStartsWith, (app::String * check, app::String * starter))
    IL2CPP_REGISTER_METHOD(0x01670160, app::String *, PtrToStringUTF8, (void * str_in))
}
