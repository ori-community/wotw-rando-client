#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MechSpiderController.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::MechSpiderController {
    IL2CPP_REGISTER_METHOD(0x02224C00, app::Vector3, get_inputVector, app::MechSpiderController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02224D30, void, Update, app::MechSpiderController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022254E0, void, ctor, app::MechSpiderController* this_ptr)
} // namespace app::classes::RootMotion::Demos::MechSpiderController
