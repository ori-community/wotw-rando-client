#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_.h>
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_ {
    IL2CPP_REGISTER_METHOD(
        0x01CC6010,
        int32_t,
        Compare,
        app::ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* this_ptr,
        app::TimelineHelper_ConstraintWrapper x,
        app::TimelineHelper_ConstraintWrapper y
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, app::ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, app::ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_
