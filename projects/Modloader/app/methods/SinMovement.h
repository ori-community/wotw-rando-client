#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SinMovement {
    IL2CPP_REGISTER_METHOD(0x00749550, bool, get_IsSuspended, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749560, void, set_IsSuspended, (app::SinMovement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0065B580, app::SuspendableMask__Enum, get_Mask, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749570, void, set_Mask, (app::SinMovement * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00749630, void, OnValidate, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749820, void, Awake, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007498C0, void, OnDestroy, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749960, void, Serialize, (app::SinMovement * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x007499B0, void, Start, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749BA0, void, FixedUpdate, (app::SinMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749C20, void, UpdateMovement, (app::SinMovement * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0074A410, void, ctor, (app::SinMovement * this_ptr))
} // namespace app::classes::SinMovement
