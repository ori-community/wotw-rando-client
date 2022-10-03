#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class** type_info;
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class>(type_info, "", "ServerSetRigidBodyPropertiesAction", "SetRigidBodyPropertiesActionData");
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData* create() {
            return il2cpp::create_object<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData>(get_class());
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed* box(app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData value) {
            return il2cpp::box_value<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed>(get_class(), value);
        }
    } // namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData
} // namespace app::classes::types
