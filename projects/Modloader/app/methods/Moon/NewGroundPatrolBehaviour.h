#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewGroundPatrolBehaviour.h>

namespace app::classes::Moon::NewGroundPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, app::NewGroundPatrolBehaviour* this_ptr)
}
