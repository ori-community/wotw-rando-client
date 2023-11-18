#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanvasCameraHooker.h>

namespace app::classes::CanvasCameraHooker {
    IL2CPP_REGISTER_METHOD(0x00B22D50, void, Start, (app::CanvasCameraHooker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanvasCameraHooker * this_ptr))
} // namespace app::classes::CanvasCameraHooker
