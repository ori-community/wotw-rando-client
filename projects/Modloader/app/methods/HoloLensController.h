#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HoloLensController.h>
#include <Modloader/app/structs/IAsyncResult.h>

namespace app::classes::HoloLensController {
    IL2CPP_REGISTER_METHOD(0x00B5B280, void, Start, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5B3A0, void, FixedUpdate, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5B420, void, WriteHoloLensData, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5C2B0, void, WriteCallback, (app::HoloLensController * this_ptr, app::IAsyncResult* ar))
    IL2CPP_REGISTER_METHOD(0x006086C0, void, ctor, (app::HoloLensController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5C450, void, cctor, ())
} // namespace app::classes::HoloLensController
