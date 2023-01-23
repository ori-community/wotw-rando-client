#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BloomSettings.h>

namespace app::classes::BloomSettings {
    IL2CPP_REGISTER_METHOD(0x00D34B00, app::BloomSettings*, Clone, (app::BloomSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B605A0, void, CopyFrom, (app::BloomSettings * this_ptr, app::BloomSettings* settings_bloom_settings))
    IL2CPP_REGISTER_METHOD(0x00D34C50, void, ctor, (app::BloomSettings * this_ptr))
} // namespace app::classes::BloomSettings
