#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::StringBuilderCache {
    IL2CPP_REGISTER_METHOD(0x027C7470, app::StringBuilder *, Acquire, (int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x027C7680, void, Release, (app::StringBuilder * sb))
    IL2CPP_REGISTER_METHOD(0x027C7770, app::String *, GetStringAndRelease, (app::StringBuilder * sb))
}
