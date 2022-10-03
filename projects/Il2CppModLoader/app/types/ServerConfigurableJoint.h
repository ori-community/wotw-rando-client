#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerConfigurableJoint {
        namespace {
            app::ServerConfigurableJoint__Class* type_info_ref = nullptr;
        }
        app::ServerConfigurableJoint__Class** type_info = &type_info_ref;
        inline app::ServerConfigurableJoint__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigurableJoint__Class>(type_info, "", "ServerConfigurableJoint");
        }
        inline app::ServerConfigurableJoint* create() {
            return il2cpp::create_object<app::ServerConfigurableJoint>(get_class());
        }
    } // namespace ServerConfigurableJoint
} // namespace app::classes::types
