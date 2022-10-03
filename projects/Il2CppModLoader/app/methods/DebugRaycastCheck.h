#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DebugRaycastCheck {
    IL2CPP_REGISTER_METHOD(0x00B72FB0, void, CheckForFirstBetweenHereAndTarget, (app::DebugRaycastCheck * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B733E0, void, SpherecastCheckBetweenHereAndTarget, (app::DebugRaycastCheck * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B73850, void, OnDrawGizmos, (app::DebugRaycastCheck * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B73A10, void, ctor, (app::DebugRaycastCheck * this_ptr))
} // namespace app::classes::DebugRaycastCheck
