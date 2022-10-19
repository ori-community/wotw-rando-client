#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerConfigurableJoint_ConfigurableJointData {
        inline app::ServerConfigurableJoint_ConfigurableJointData__Class** type_info = (app::ServerConfigurableJoint_ConfigurableJointData__Class**)(modloader::win::memory::resolve_rva(0x04765688));
        inline app::ServerConfigurableJoint_ConfigurableJointData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerConfigurableJoint_ConfigurableJointData__Class>(type_info, "", "ServerConfigurableJoint", "ConfigurableJointData");
        }
        inline app::ServerConfigurableJoint_ConfigurableJointData* create() {
            return il2cpp::create_object<app::ServerConfigurableJoint_ConfigurableJointData>(get_class());
        }
        inline app::ServerConfigurableJoint_ConfigurableJointData__Boxed* box(app::ServerConfigurableJoint_ConfigurableJointData value) {
            return il2cpp::box_value<app::ServerConfigurableJoint_ConfigurableJointData__Boxed>(get_class(), value);
        }
    } // namespace ServerConfigurableJoint_ConfigurableJointData
} // namespace app::classes::types
