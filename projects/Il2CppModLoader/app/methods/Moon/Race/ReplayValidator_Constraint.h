#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Race::ReplayValidator_Constraint {
    IL2CPP_REGISTER_METHOD(0x00C4C420, bool, IntervalComplete, (app::ReplayValidator_Constraint * this_ptr, app::ReplayValidator_Snapshot * past, app::ReplayValidator_Snapshot * current))
    IL2CPP_REGISTER_METHOD(0x00C4C460, bool, IsValid, (app::ReplayValidator_Constraint * this_ptr, app::ReplayValidator_Snapshot * past, app::ReplayValidator_Snapshot * current))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReplayValidator_Constraint * this_ptr))
}
