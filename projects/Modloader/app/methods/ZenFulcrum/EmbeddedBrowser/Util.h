#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Util {
    IL2CPP_REGISTER_METHOD(0x016700E0, bool, SafeStartsWith, (app::String * check, app::String* starter))
    IL2CPP_REGISTER_METHOD(0x01670160, app::String*, PtrToStringUTF8, (void* str_in))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Util
