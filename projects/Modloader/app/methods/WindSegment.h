#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WindSegment.h>

namespace app::classes::WindSegment {
    IL2CPP_REGISTER_METHOD(0x005782E0, void, Awake, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00578480, void, OnDestroy, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00578520, void, Serialize, app::WindSegment* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x005785D0, void, OnEntered, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00578840, void, OnVisitedNextSegment, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00578900, void, FixedUpdate, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00578B50, void, Finish, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsSuspended, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsSuspended, app::WindSegment* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, app::SuspendableMask__Enum, get_Mask, app::WindSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00578C00, void, set_Mask, app::WindSegment* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00578CB0, void, ctor, app::WindSegment* this_ptr)
} // namespace app::classes::WindSegment
