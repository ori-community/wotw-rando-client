#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/CameraOffsetController_c.h>

namespace app::classes::CameraOffsetController___c {
    IL2CPP_REGISTER_METHOD(0x0169ACA0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CameraOffsetController_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0169ADE0,
        int32_t,
        _GetCurrentOffsetTarget_b__45_0,
        app::CameraOffsetController_c* this_ptr,
        app::CameraOffsetController_OffsetLayer* layer1,
        app::CameraOffsetController_OffsetLayer* layer2
    )
} // namespace app::classes::CameraOffsetController___c
