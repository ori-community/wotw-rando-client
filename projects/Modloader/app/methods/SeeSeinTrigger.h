#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeeSeinTrigger.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeeSeinTrigger {
    IL2CPP_REGISTER_METHOD(0x0106BAA0, void, ProvideComponents, (app::SeeSeinTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09730, void, Awake, (app::SeeSeinTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106BAA0, void, Start, (app::SeeSeinTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106BB80, bool, Raycast, (app::SeeSeinTrigger * this_ptr, app::Vector3 origin, app::Vector3 target, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0106BE60, void, FixedUpdate, (app::SeeSeinTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106C6D0, void, ctor, (app::SeeSeinTrigger * this_ptr))
} // namespace app::classes::SeeSeinTrigger
