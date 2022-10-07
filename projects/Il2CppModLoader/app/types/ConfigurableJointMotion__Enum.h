#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJointMotion__Enum {
        namespace {
            app::ConfigurableJointMotion__Enum__Class* type_info_ref = nullptr;
        }
        app::ConfigurableJointMotion__Enum__Class** type_info = &type_info_ref;
        inline app::ConfigurableJointMotion__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJointMotion__Enum__Class>(type_info, "UnityEngine", "ConfigurableJointMotion");
        }
        inline app::ConfigurableJointMotion__Enum* create() {
            return il2cpp::create_object<app::ConfigurableJointMotion__Enum>(get_class());
        }
        inline app::ConfigurableJointMotion__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ConfigurableJointMotion__Enum__Array>(get_class(), size);
        }
        inline app::ConfigurableJointMotion__Enum__Array* create_array(const std::vector<app::ConfigurableJointMotion__Enum*>& items) {
            return il2cpp::array_new<app::ConfigurableJointMotion__Enum__Array>(get_class(), items);
        }
    } // namespace ConfigurableJointMotion__Enum
} // namespace app::classes::types
