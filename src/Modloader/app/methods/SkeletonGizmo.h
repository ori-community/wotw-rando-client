#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeletonGizmo.h>

namespace app::classes::SkeletonGizmo {
    IL2CPP_REGISTER_METHOD(0x006B3F70, void, OnDrawGizmos, app::SkeletonGizmo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B43F0, void, PopulateChildren, app::SkeletonGizmo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B44E0, void, ctor, app::SkeletonGizmo* this_ptr)
} // namespace app::classes::SkeletonGizmo
