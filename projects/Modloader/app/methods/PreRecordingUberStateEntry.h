#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PreRecordingUberStateEntry {
    IL2CPP_REGISTER_METHOD(0x0011D740, void, ctor, (app::PreRecordingUberStateEntry__Boxed * this_ptr, app::IGenericUberState* uber_state, float value))
}
