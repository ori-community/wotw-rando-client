#pragma once
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData.h>
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Boxed.h>
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData {
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class** type_info() {
            static app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class**)(modloader::win::memory::resolve_rva(0x04719CA0));
            }
            return cache;
        }
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class>(type_info(), "", "ServerConfigureConfigurableJointAction", "ConfigureConfigurableJointActionData");
        }
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData* create() {
            return il2cpp::create_object<app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData>(get_class());
        }
        inline app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Boxed* box(app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData value) {
            return il2cpp::box_value<app::ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Boxed>(get_class(), value);
        }
    } // namespace ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData
} // namespace app::classes::types
