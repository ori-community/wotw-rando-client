#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfigurableJoint__Class** type_info;
        inline app::ConfigurableJoint__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJoint__Class>(type_info, "UnityEngine", "ConfigurableJoint");
        }
        inline app::ConfigurableJoint* create() {
            return il2cpp::create_object<app::ConfigurableJoint>(get_class());
        }
        inline app::ConfigurableJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::ConfigurableJoint__Array>(get_class(), size);
        }
        inline app::ConfigurableJoint__Array* create_array(const std::vector<app::ConfigurableJoint*>& items) {
            return il2cpp::array_new<app::ConfigurableJoint__Array>(get_class(), items);
        }
    } // namespace ConfigurableJoint
} // namespace app::classes::types
