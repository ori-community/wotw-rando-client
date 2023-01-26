#pragma once
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed.h>
#include <Modloader/app/structs/ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData {
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class** type_info() {
            static app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class**)(modloader::win::memory::resolve_rva(0x0474D7C8));
            }
            return cache;
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class>(type_info(), "", "ServerSetRigidBodyPropertiesAction", "SetRigidBodyPropertiesActionData");
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData* create() {
            return il2cpp::create_object<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData>(get_class());
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed* box(app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData value) {
            return il2cpp::box_value<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed>(get_class(), value);
        }
    } // namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData
} // namespace app::classes::types
