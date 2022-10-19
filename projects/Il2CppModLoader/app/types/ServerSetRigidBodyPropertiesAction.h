#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
