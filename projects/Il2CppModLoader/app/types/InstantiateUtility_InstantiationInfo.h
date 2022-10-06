#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility_InstantiationInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateUtility_InstantiationInfo__Class** type_info;
        inline app::InstantiateUtility_InstantiationInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_InstantiationInfo__Class>(type_info, "", "InstantiateUtility", "InstantiationInfo");
        }
        inline app::InstantiateUtility_InstantiationInfo* create() {
            return il2cpp::create_object<app::InstantiateUtility_InstantiationInfo>(get_class());
        }
        inline app::InstantiateUtility_InstantiationInfo__Boxed* box(app::InstantiateUtility_InstantiationInfo value) {
            return il2cpp::box_value<app::InstantiateUtility_InstantiationInfo__Boxed>(get_class(), value);
        }
        inline app::InstantiateUtility_InstantiationInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::InstantiateUtility_InstantiationInfo__Array>(get_class(), size);
        }
        inline app::InstantiateUtility_InstantiationInfo__Array* create_array(const std::vector<app::InstantiateUtility_InstantiationInfo__Boxed>& items) {
            return il2cpp::array_new<app::InstantiateUtility_InstantiationInfo__Array>(get_class(), items);
        }
    } // namespace InstantiateUtility_InstantiationInfo
} // namespace app::classes::types
