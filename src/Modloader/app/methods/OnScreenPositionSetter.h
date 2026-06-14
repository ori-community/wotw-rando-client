#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnScreenPositionSetter.h>

namespace app::classes::OnScreenPositionSetter {
    IL2CPP_REGISTER_METHOD(0x006123C0, void, Awake, app::OnScreenPositionSetter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00612420, void, Start, app::OnScreenPositionSetter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006127E0, void, ctor, app::OnScreenPositionSetter* this_ptr)
} // namespace app::classes::OnScreenPositionSetter
