#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Touch__Boxed.h>
#include <Modloader/app/structs/TouchPhase__Enum.h>
#include <Modloader/app/structs/TouchType__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Touch {
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_fingerId, (app::Touch__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002292E0, app::Vector2, get_position, (app::Touch__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229300, app::TouchPhase__Enum, get_phase, (app::Touch__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9B00, app::TouchType__Enum, get_type, (app::Touch__Boxed * this_ptr))
} // namespace app::classes::UnityEngine::Touch
