#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundPatrolBehaviour.h>

namespace app::classes::Moon::GroundPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::GroundPatrolBehaviour * this_ptr))
}
