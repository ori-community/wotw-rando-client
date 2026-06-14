#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MinerPatrolBehaviour.h>

namespace app::classes::MinerPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x0144E510, void, ctor, app::MinerPatrolBehaviour* this_ptr)
}
