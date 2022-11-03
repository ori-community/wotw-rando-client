#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HoloLensController {
    IL2CPP_REGISTER_METHOD(0x00B5B280, void, Start, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5B3A0, void, FixedUpdate, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5B420, void, WriteHoloLensData, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5C2B0, void, WriteCallback, (app::HoloLensController * this_ptr, app::IAsyncResult* ar))
    IL2CPP_REGISTER_METHODINFO(0x0472B480, HoloLensController_WriteCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006086C0, void, ctor, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5C450, void, cctor, ())
} // namespace app::classes::HoloLensController
