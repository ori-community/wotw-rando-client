#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::moonCore::moonDriver::UpdateHelperWisp {
    IL2CPP_REGISTER_METHOD(0x00F71530, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x00F71690, app::UpdateCategory__Enum, GetUpdateCategoryForTransform, (app::Transform * transform, app::Rigidbody * * rigidbody))
    IL2CPP_REGISTER_METHODINFO(0x04757238, UpdateHelperWisp_GetUpdateCategoryForTransform__MethodInfo)
}
