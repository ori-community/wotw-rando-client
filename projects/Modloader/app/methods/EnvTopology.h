#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnvTopology.h>

namespace app::classes::EnvTopology {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EnvTopology* this_ptr)
}
