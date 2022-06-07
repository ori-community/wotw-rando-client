#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetRigidBodyPropertiesAction {
    IL2CPP_REGISTER_METHOD(0x005A3710, void, Perform, (app::SetRigidBodyPropertiesAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005A38F0, void, Serialize, (app::SetRigidBodyPropertiesAction * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x005A3C00, void, ctor, (app::SetRigidBodyPropertiesAction * this_ptr))
}
