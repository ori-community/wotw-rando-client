#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetRigidBodyPropertiesAction__Class.h>
#include <Modloader/app/structs/SetRigidBodyPropertiesAction.h>

namespace app::classes::types {
    namespace SetRigidBodyPropertiesAction {
        inline app::SetRigidBodyPropertiesAction__Class** type_info = (app::SetRigidBodyPropertiesAction__Class**)(modloader::win::memory::resolve_rva(0x04768498));
        inline app::SetRigidBodyPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::SetRigidBodyPropertiesAction__Class>(type_info, "", "SetRigidBodyPropertiesAction");
        }
        inline app::SetRigidBodyPropertiesAction* create() {
            return il2cpp::create_object<app::SetRigidBodyPropertiesAction>(get_class());
        }
    } // namespace SetRigidBodyPropertiesAction
} // namespace app::classes::types
