#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StatSetting.h>

namespace app::classes::StatSetting {
    IL2CPP_REGISTER_METHOD(0x009B36A0, app::String*, GetNumberLabel, (app::StatSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::StatSetting * this_ptr))
} // namespace app::classes::StatSetting
