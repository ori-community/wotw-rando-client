#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>

namespace app::classes::UberPoolPerfTest_Settings {
    IL2CPP_REGISTER_METHOD(0x00FECA30, app::UberPoolPerfTest_Settings*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x00FECC70, app::UberPoolPerfTest_Settings*, FromScene, )
    IL2CPP_REGISTER_METHOD(0x00FECEC0, app::UberPoolPerfTest_Settings*, FromSceneOrDefault, )
    IL2CPP_REGISTER_METHOD(0x00FECEE0, app::UberPoolPerfTest_Settings*, Clone, app::UberPoolPerfTest_Settings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FECF70, app::Object*, ICloneable_Clone, app::UberPoolPerfTest_Settings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UberPoolPerfTest_Settings* this_ptr)
} // namespace app::classes::UberPoolPerfTest_Settings
