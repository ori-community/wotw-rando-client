#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::moonCore::moonDriver::UpdateHelper {
    IL2CPP_REGISTER_METHOD(0x0313D8C0, app::UpdateCategory__Enum, GetUpdateCategoryForTransform, (app::Transform * transform, app::Rigidbody** rigidbody))
}
