#pragma once
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSetRigidBodyPropertiesAction {
        inline app::ServerSetRigidBodyPropertiesAction__Class** type_info() {
            static app::ServerSetRigidBodyPropertiesAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerSetRigidBodyPropertiesAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerSetRigidBodyPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::ServerSetRigidBodyPropertiesAction__Class>(type_info(), "", "ServerSetRigidBodyPropertiesAction");
        }
        inline app::ServerSetRigidBodyPropertiesAction* create() {
            return il2cpp::create_object<app::ServerSetRigidBodyPropertiesAction>(get_class());
        }
    } // namespace ServerSetRigidBodyPropertiesAction
} // namespace app::classes::types
