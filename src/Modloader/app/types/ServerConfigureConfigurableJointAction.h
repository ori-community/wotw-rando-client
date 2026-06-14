#pragma once
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction.h>
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerConfigureConfigurableJointAction {
        inline app::ServerConfigureConfigurableJointAction__Class** type_info() {
            static app::ServerConfigureConfigurableJointAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerConfigureConfigurableJointAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerConfigureConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigureConfigurableJointAction__Class>(type_info(), "", "ServerConfigureConfigurableJointAction");
        }
        inline app::ServerConfigureConfigurableJointAction* create() {
            return il2cpp::create_object<app::ServerConfigureConfigurableJointAction>(get_class());
        }
    } // namespace ServerConfigureConfigurableJointAction
} // namespace app::classes::types
