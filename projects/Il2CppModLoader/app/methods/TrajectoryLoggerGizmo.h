#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TrajectoryLoggerGizmo {
    IL2CPP_REGISTER_METHOD(0x00B05870, void, OnDrawGizmos, (app::TrajectoryLoggerGizmo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B05BB0, void, Start, (app::TrajectoryLoggerGizmo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B05E00, void, FixedUpdate, (app::TrajectoryLoggerGizmo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B060F0, void, ctor, (app::TrajectoryLoggerGizmo * this_ptr))
} // namespace app::classes::TrajectoryLoggerGizmo
