#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CartDashValueProvider {
    IL2CPP_REGISTER_METHOD(0x00B372E0, float, GetFloatValue, (app::CartDashValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CartDashValueProvider * this_ptr))
} // namespace app::classes::CartDashValueProvider
