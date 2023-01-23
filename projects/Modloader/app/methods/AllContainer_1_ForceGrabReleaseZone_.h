#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AllContainer_1_ForceGrabReleaseZone_.h>
#include <Modloader/app/structs/ForceGrabReleaseZone.h>

namespace app::classes::AllContainer_1_ForceGrabReleaseZone_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, (app::AllContainer_1_ForceGrabReleaseZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797F98, AllContainer_1_ForceGrabReleaseZone__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::ForceGrabReleaseZone*, get_Item, (app::AllContainer_1_ForceGrabReleaseZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473AFD8, AllContainer_1_ForceGrabReleaseZone__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, (app::AllContainer_1_ForceGrabReleaseZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D4F0, AllContainer_1_ForceGrabReleaseZone__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, (app::AllContainer_1_ForceGrabReleaseZone_ * this_ptr, app::ForceGrabReleaseZone* item))
    IL2CPP_REGISTER_METHODINFO(0x04708608, AllContainer_1_ForceGrabReleaseZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, (app::AllContainer_1_ForceGrabReleaseZone_ * this_ptr, app::ForceGrabReleaseZone* item))
    IL2CPP_REGISTER_METHODINFO(0x04754538, AllContainer_1_ForceGrabReleaseZone__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::AllContainer_1_ForceGrabReleaseZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785D08, AllContainer_1_ForceGrabReleaseZone___ctor__MethodInfo)
} // namespace app::classes::AllContainer_1_ForceGrabReleaseZone_
