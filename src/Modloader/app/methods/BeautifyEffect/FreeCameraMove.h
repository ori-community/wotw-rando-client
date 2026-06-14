#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FreeCameraMove.h>

namespace app::classes::BeautifyEffect::FreeCameraMove {
    IL2CPP_REGISTER_METHOD(0x0317C200, void, Start, app::FreeCameraMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0317C380, void, Update, app::FreeCameraMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0317D440, void, ctor, app::FreeCameraMove* this_ptr)
} // namespace app::classes::BeautifyEffect::FreeCameraMove
