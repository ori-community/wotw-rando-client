#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::KwolokBossLocomotion_MoveRequest {
    IL2CPP_REGISTER_METHOD(0x012E7B50, bool, get_Succeeded, app::KwolokBossLocomotion_MoveRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E7B60, void, ctor, app::KwolokBossLocomotion_MoveRequest* this_ptr, app::String* name)
} // namespace app::classes::KwolokBossLocomotion_MoveRequest
