#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfigurableJoint__Array__Class** type_info;
        inline app::ConfigurableJoint__Array__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJoint__Array__Class>(type_info, "UnityEngine", "ConfigurableJoint[]");
        }
        inline app::ConfigurableJoint__Array* create() {
            return il2cpp::create_object<app::ConfigurableJoint__Array>(get_class());
        }
    } // namespace ConfigurableJoint__Array
} // namespace app::classes::types
