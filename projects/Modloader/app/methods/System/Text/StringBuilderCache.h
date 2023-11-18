#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::StringBuilderCache {
    IL2CPP_REGISTER_METHOD(0x027C7470, app::StringBuilder*, Acquire, (int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x027C7680, void, Release, (app::StringBuilder * sb))
    IL2CPP_REGISTER_METHOD(0x027C7770, app::String*, GetStringAndRelease, (app::StringBuilder * sb))
} // namespace app::classes::System::Text::StringBuilderCache
