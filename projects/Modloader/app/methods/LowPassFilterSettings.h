#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LowPassFilterSettings {
    IL2CPP_REGISTER_METHOD(0x009F3CF0, app::LowPassFilterSettings*, get_StandardSetting, ())
    IL2CPP_REGISTER_METHOD(0x009F3E50, void, ctor, (app::LowPassFilterSettings * this_ptr))
} // namespace app::classes::LowPassFilterSettings
