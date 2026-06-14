#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/PreRecordingUberStateEntry__Boxed.h>

namespace app::classes::PreRecordingUberStateEntry {
    IL2CPP_REGISTER_METHOD(0x0011D740, void, ctor, app::PreRecordingUberStateEntry__Boxed* this_ptr, app::IGenericUberState* uber_state, float value)
}
