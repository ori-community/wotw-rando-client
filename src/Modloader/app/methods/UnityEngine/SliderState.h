#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SliderState.h>

namespace app::classes::UnityEngine::SliderState {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SliderState* this_ptr)
}
