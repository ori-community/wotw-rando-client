#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AlignSplineToVerletStructure {
    IL2CPP_REGISTER_METHOD(0x004F1E60, void, FindJoints, (app::AlignSplineToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F20D0, void, AlignSpline, (app::AlignSplineToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2310, void, Init, (app::AlignSplineToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::SuspendableMask__Enum, get_Mask, (app::AlignSplineToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Mask, (app::AlignSplineToVerletStructure * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (app::AlignSplineToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (app::AlignSplineToVerletStructure * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004F2340, void, OnUpdatePhysics, (app::AlignSplineToVerletStructure * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x004F2730, void, ctor, (app::AlignSplineToVerletStructure * this_ptr))
} // namespace app::classes::AlignSplineToVerletStructure
