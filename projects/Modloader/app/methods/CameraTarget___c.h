#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraTarget_c.h>
#include <Modloader/app/structs/CameraTarget_TargetLayer.h>

namespace app::classes::CameraTarget___c {
    IL2CPP_REGISTER_METHOD(0x00B20F60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraTarget_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B210A0, int32_t, _UpdateTargetPosition_b__10_0, (app::CameraTarget_c * this_ptr, app::CameraTarget_TargetLayer* layer1, app::CameraTarget_TargetLayer* layer2))
} // namespace app::classes::CameraTarget___c
