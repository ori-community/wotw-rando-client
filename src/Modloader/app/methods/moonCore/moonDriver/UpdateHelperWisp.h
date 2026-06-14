#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>

namespace app::classes::moonCore::moonDriver::UpdateHelperWisp {
    IL2CPP_REGISTER_METHOD(0x00F71530, void, Init, )
    IL2CPP_REGISTER_METHOD(0x00F71690, app::UpdateCategory__Enum, GetUpdateCategoryForTransform, app::Transform* transform, app::Rigidbody** rigidbody)
} // namespace app::classes::moonCore::moonDriver::UpdateHelperWisp
