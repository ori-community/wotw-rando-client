#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction__Class.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction.h>

namespace app::classes::types {
    namespace ServerSetRigidBodyPropertiesAction {
        namespace {
            inline app::ServerSetRigidBodyPropertiesAction__Class* type_info_ref = nullptr;
        }
        inline app::ServerSetRigidBodyPropertiesAction__Class** type_info = &type_info_ref;
        inline app::ServerSetRigidBodyPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::ServerSetRigidBodyPropertiesAction__Class>(type_info, "", "ServerSetRigidBodyPropertiesAction");
        }
        inline app::ServerSetRigidBodyPropertiesAction* create() {
            return il2cpp::create_object<app::ServerSetRigidBodyPropertiesAction>(get_class());
        }
    } // namespace ServerSetRigidBodyPropertiesAction
} // namespace app::classes::types
