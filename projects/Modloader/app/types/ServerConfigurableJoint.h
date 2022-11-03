#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerConfigurableJoint {
        namespace {
            inline app::ServerConfigurableJoint__Class* type_info_ref = nullptr;
        }
        inline app::ServerConfigurableJoint__Class** type_info = &type_info_ref;
        inline app::ServerConfigurableJoint__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigurableJoint__Class>(type_info, "", "ServerConfigurableJoint");
        }
        inline app::ServerConfigurableJoint* create() {
            return il2cpp::create_object<app::ServerConfigurableJoint>(get_class());
        }
    } // namespace ServerConfigurableJoint
} // namespace app::classes::types
