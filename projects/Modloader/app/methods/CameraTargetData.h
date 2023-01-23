#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraTargetData.h>

namespace app::classes::CameraTargetData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraTargetData * this_ptr))
}
