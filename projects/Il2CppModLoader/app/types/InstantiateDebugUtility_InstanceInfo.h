#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_InstanceInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateDebugUtility_InstanceInfo__Class** type_info;
        inline app::InstantiateDebugUtility_InstanceInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateDebugUtility_InstanceInfo__Class>(type_info, "InstantiateDebug", "InstantiateDebugUtility", "InstanceInfo");
        }
        inline app::InstantiateDebugUtility_InstanceInfo* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_InstanceInfo>(get_class());
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Boxed* box(app::InstantiateDebugUtility_InstanceInfo value) {
            return il2cpp::box_value<app::InstantiateDebugUtility_InstanceInfo__Boxed>(get_class(), value);
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::InstantiateDebugUtility_InstanceInfo__Array>(get_class(), size);
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Array* create_array(const std::vector<app::InstantiateDebugUtility_InstanceInfo>& items) {
            return il2cpp::array_new<app::InstantiateDebugUtility_InstanceInfo__Array>(get_class(), items);
        }
    } // namespace InstantiateDebugUtility_InstanceInfo
} // namespace app::classes::types
