#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinTrajectory.h>

namespace app::classes::SeinTrajectory {
    IL2CPP_REGISTER_METHOD(0x00A9E9E0, void, OnDrawGizmos, app::SeinTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9FC00, void, ctor, app::SeinTrajectory* this_ptr)
} // namespace app::classes::SeinTrajectory
