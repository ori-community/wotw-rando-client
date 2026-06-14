#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PickUpBox.h>

namespace app::classes::RootMotion::Demos::PickUpBox {
    IL2CPP_REGISTER_METHOD(0x0222CA40, void, RotatePivot, app::PickUpBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0222CA30, void, ctor, app::PickUpBox* this_ptr)
} // namespace app::classes::RootMotion::Demos::PickUpBox
