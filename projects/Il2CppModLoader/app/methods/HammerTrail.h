#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HammerTrail {
    IL2CPP_REGISTER_METHOD(0x0109C420, void, Initialize, (app::HammerTrail * this_ptr, app::Transform * traced_point, app::Transform * rotation_center))
    IL2CPP_REGISTER_METHOD(0x0109C540, void, StopTracingAndDestroy, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109C550, void, Start, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109C5E0, void, Update, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109C900, void, RemoveExpiredPoints, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109CA30, void, AddNewPoints, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109CFC0, void, SyncWithLineRenderer, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D120, void, Clear, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D130, bool, IsEmpty, (app::HammerTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D140, void, ctor, (app::HammerTrail * this_ptr))
}
