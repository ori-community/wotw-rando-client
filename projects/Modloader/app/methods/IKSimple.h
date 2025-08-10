#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSimple.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::IKSimple {
    IL2CPP_REGISTER_METHOD(0x00B71990, void, Solve, app::IKSimple* this_ptr, app::Transform__Array* bones, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x00B72FA0, void, ctor, app::IKSimple* this_ptr)
} // namespace app::classes::IKSimple
