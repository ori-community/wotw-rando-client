#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolPerfTest_Settings_c.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings.h>

namespace app::classes::UberPoolPerfTest_Settings___c {
    IL2CPP_REGISTER_METHOD(0x00FECF80, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberPoolPerfTest_Settings_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FED0C0, bool, _FromScene_b__6_0, (app::UberPoolPerfTest_Settings_c * this_ptr, app::UberPoolPerfTestSettings* x))
} // namespace app::classes::UberPoolPerfTest_Settings___c
