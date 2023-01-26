#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleTarget.h>

namespace app::classes::TentacleTarget {
    IL2CPP_REGISTER_METHOD(0x010D7100, void, Update, (app::TentacleTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D7660, void, ctor, (app::TentacleTarget * this_ptr))
} // namespace app::classes::TentacleTarget
