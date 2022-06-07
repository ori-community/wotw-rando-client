#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::moonCore::moonDriver::UpdateHelper {
    IL2CPP_REGISTER_METHOD(0x0313D8C0, app::UpdateCategory__Enum, GetUpdateCategoryForTransform, (app::Transform * transform, app::Rigidbody * * rigidbody))
}
