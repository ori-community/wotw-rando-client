#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievement_c_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UTF8StringPtr.h>

namespace app::classes::XGamingRuntime::Interop::XblAchievement___c {
    IL2CPP_REGISTER_METHOD(0x030B3DC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XblAchievement_c_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030B3F00, app::String*, _GetPlatformsAvailableOn_b__2_0, (app::XblAchievement_c_1 * this_ptr, app::UTF8StringPtr s))
} // namespace app::classes::XGamingRuntime::Interop::XblAchievement___c
