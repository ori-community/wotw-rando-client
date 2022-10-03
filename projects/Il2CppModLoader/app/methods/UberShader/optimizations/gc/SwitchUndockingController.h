#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberShader::optimizations::gc::SwitchUndockingController {
    IL2CPP_REGISTER_METHOD(0x01902270, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x01902310, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x019023F0, bool, ShouldRunCleanupAfterSwitchingOperationMode, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SwitchUndockingController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01902490, void, cctor, ())
} // namespace app::classes::UberShader::optimizations::gc::SwitchUndockingController
