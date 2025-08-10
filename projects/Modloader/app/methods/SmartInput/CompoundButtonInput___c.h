#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompoundButtonInput_c.h>
#include <Modloader/app/structs/IButtonInput.h>

namespace app::classes::SmartInput::CompoundButtonInput___c {
    IL2CPP_REGISTER_METHOD(0x006CB200, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CompoundButtonInput_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006CB340, bool, _ContainsKey_b__8_0, app::CompoundButtonInput_c* this_ptr, app::IButtonInput* b)
} // namespace app::classes::SmartInput::CompoundButtonInput___c
