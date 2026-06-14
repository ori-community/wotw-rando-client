#pragma once
#include <Modloader/app/structs/ServerConfigurableJoint.h>
#include <Modloader/app/structs/ServerConfigurableJoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerConfigurableJoint {
        inline app::ServerConfigurableJoint__Class** type_info() {
            static app::ServerConfigurableJoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerConfigurableJoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerConfigurableJoint__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigurableJoint__Class>(type_info(), "", "ServerConfigurableJoint");
        }
        inline app::ServerConfigurableJoint* create() {
            return il2cpp::create_object<app::ServerConfigurableJoint>(get_class());
        }
    } // namespace ServerConfigurableJoint
} // namespace app::classes::types
