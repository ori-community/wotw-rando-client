#pragma once
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData.h>
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData__Boxed.h>
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerConfigurableJoint_ConfigurableJointData {
        inline app::ServerConfigurableJoint_ConfigurableJointData__Class** type_info() {
            static app::ServerConfigurableJoint_ConfigurableJointData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerConfigurableJoint_ConfigurableJointData__Class**)(modloader::win::memory::resolve_rva(0x04765688));
            }
            return cache;
        }
        inline app::ServerConfigurableJoint_ConfigurableJointData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerConfigurableJoint_ConfigurableJointData__Class>(type_info(), "", "ServerConfigurableJoint", "ConfigurableJointData");
        }
        inline app::ServerConfigurableJoint_ConfigurableJointData* create() {
            return il2cpp::create_object<app::ServerConfigurableJoint_ConfigurableJointData>(get_class());
        }
        inline app::ServerConfigurableJoint_ConfigurableJointData__Boxed* box(app::ServerConfigurableJoint_ConfigurableJointData value) {
            return il2cpp::box_value<app::ServerConfigurableJoint_ConfigurableJointData__Boxed>(get_class(), value);
        }
    } // namespace ServerConfigurableJoint_ConfigurableJointData
} // namespace app::classes::types
