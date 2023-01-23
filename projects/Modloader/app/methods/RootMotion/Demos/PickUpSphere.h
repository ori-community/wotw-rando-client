#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PickUpSphere.h>

namespace app::classes::RootMotion::Demos::PickUpSphere {
    IL2CPP_REGISTER_METHOD(0x0222D120, void, RotatePivot, (app::PickUpSphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222CA30, void, ctor, (app::PickUpSphere * this_ptr))
} // namespace app::classes::RootMotion::Demos::PickUpSphere
