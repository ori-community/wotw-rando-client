#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/StateMap_1_System_Object_.h>

namespace app::classes::StateMap_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D19E60, int32_t, Resolve, app::StateMap_1_System_Object_* this_ptr, app::IUberState* state)
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, app::StateMap_1_System_Object_* this_ptr)
} // namespace app::classes::StateMap_1_System_Object_
