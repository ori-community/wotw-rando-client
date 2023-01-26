#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetRigidBodyPropertiesAction.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetRigidBodyPropertiesAction {
    IL2CPP_REGISTER_METHOD(0x005A3710, void, Perform, (app::SetRigidBodyPropertiesAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A38F0, void, Serialize, (app::SetRigidBodyPropertiesAction * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005A3C00, void, ctor, (app::SetRigidBodyPropertiesAction * this_ptr))
} // namespace app::classes::SetRigidBodyPropertiesAction
