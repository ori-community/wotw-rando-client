#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntStateMap_Mapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntStateMap_Mapping__Class** type_info;
        inline app::IntStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::IntStateMap_Mapping__Class>(type_info, "", "IntStateMap", "Mapping");
        }
        inline app::IntStateMap_Mapping* create() {
            return il2cpp::create_object<app::IntStateMap_Mapping>(get_class());
        }
        inline app::IntStateMap_Mapping__Boxed* box(app::IntStateMap_Mapping value) {
            return il2cpp::box_value<app::IntStateMap_Mapping__Boxed>(get_class(), value);
        }
        inline app::IntStateMap_Mapping__Array* create_array(int size) {
            return il2cpp::array_new<app::IntStateMap_Mapping__Array>(get_class(), size);
        }
        inline app::IntStateMap_Mapping__Array* create_array(const std::vector<app::IntStateMap_Mapping>& items) {
            return il2cpp::array_new<app::IntStateMap_Mapping__Array>(get_class(), items);
        }
    } // namespace IntStateMap_Mapping
} // namespace app::classes::types
