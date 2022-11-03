#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerConfigureConfigurableJointAction {
        namespace {
            inline app::ServerConfigureConfigurableJointAction__Class* type_info_ref = nullptr;
        }
        inline app::ServerConfigureConfigurableJointAction__Class** type_info = &type_info_ref;
        inline app::ServerConfigureConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigureConfigurableJointAction__Class>(type_info, "", "ServerConfigureConfigurableJointAction");
        }
        inline app::ServerConfigureConfigurableJointAction* create() {
            return il2cpp::create_object<app::ServerConfigureConfigurableJointAction>(get_class());
        }
    } // namespace ServerConfigureConfigurableJointAction
} // namespace app::classes::types
