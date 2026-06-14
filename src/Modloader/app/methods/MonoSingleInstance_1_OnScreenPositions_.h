#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoSingleInstance_1_OnScreenPositions_.h>
#include <Modloader/app/structs/OnScreenPositions.h>

namespace app::classes::MonoSingleInstance_1_OnScreenPositions_ {
    IL2CPP_REGISTER_METHOD(0x019FA2D0, app::OnScreenPositions*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, app::MonoSingleInstance_1_OnScreenPositions_* this_ptr)
} // namespace app::classes::MonoSingleInstance_1_OnScreenPositions_
