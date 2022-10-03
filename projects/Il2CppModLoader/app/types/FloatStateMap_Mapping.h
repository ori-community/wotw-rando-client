#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatStateMap_Mapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatStateMap_Mapping__Class** type_info;
        inline app::FloatStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatStateMap_Mapping__Class>(type_info, "", "FloatStateMap", "Mapping");
        }
        inline app::FloatStateMap_Mapping* create() {
            return il2cpp::create_object<app::FloatStateMap_Mapping>(get_class());
        }
        inline app::FloatStateMap_Mapping__Boxed* box(app::FloatStateMap_Mapping value) {
            return il2cpp::box_value<app::FloatStateMap_Mapping__Boxed>(get_class(), value);
        }
        inline app::FloatStateMap_Mapping__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatStateMap_Mapping__Array>(get_class(), size);
        }
    } // namespace FloatStateMap_Mapping
} // namespace app::classes::types
