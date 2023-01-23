#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MinerChaseBehaviour.h>

namespace app::classes::MinerChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x00872D30, void, ctor, (app::MinerChaseBehaviour * this_ptr))
}
