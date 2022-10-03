#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TorchInsideZoneChecker {
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsInside, (app::TorchInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00750, void, UpdateInsideCheck, (app::TorchInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00990, void, FixedUpdate, (app::TorchInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00735B10, void, ctor, (app::TorchInsideZoneChecker * this_ptr))
} // namespace app::classes::TorchInsideZoneChecker
