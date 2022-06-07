#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimelineBranchingControllerTest {
    IL2CPP_REGISTER_METHOD(0x010F52E0, app::Enum__Array *, GetEntries, (app::TimelineBranchingControllerTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F5370, app::Enum, Evaluate, (app::TimelineBranchingControllerTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F5540, void, OnDrawGizmos, (app::TimelineBranchingControllerTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldSkip, (app::TimelineBranchingControllerTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimelineBranchingControllerTest * this_ptr))
}
