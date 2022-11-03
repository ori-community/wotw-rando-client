#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsInZoneCondition {
    IL2CPP_REGISTER_METHOD(0x00646560, bool, Validate, (app::IsInZoneCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsInZoneCondition * this_ptr))
} // namespace app::classes::IsInZoneCondition
