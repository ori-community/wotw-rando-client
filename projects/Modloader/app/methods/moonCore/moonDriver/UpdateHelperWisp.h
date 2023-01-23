#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Rigidbody.h>

namespace app::classes::moonCore::moonDriver::UpdateHelperWisp {
    IL2CPP_REGISTER_METHOD(0x00F71530, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x00F71690, app::UpdateCategory__Enum, GetUpdateCategoryForTransform, (app::Transform * transform, app::Rigidbody** rigidbody))
    IL2CPP_REGISTER_METHODINFO(0x04757238, UpdateHelperWisp_GetUpdateCategoryForTransform__MethodInfo)
} // namespace app::classes::moonCore::moonDriver::UpdateHelperWisp
