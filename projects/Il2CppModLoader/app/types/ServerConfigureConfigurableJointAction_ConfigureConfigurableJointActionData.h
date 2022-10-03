#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class** type_info;
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class>(type_info, "", "ServerConfigureConfigurableJointAction", "ConfigureConfigurableJointActionData");
        }
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData* create() {
            return il2cpp::create_object<app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData>(get_class());
        }
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Boxed* box(app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData value) {
            return il2cpp::box_value<app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Boxed>(get_class(), value);
        }
    } // namespace ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData
} // namespace app::classes::types
