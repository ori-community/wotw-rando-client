#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteStateMap_Mapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByteStateMap_Mapping__Class** type_info;
        inline app::ByteStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::ByteStateMap_Mapping__Class>(type_info, "", "ByteStateMap", "Mapping");
        }
        inline app::ByteStateMap_Mapping* create() {
            return il2cpp::create_object<app::ByteStateMap_Mapping>(get_class());
        }
        inline app::ByteStateMap_Mapping__Boxed* box(app::ByteStateMap_Mapping value) {
            return il2cpp::box_value<app::ByteStateMap_Mapping__Boxed>(get_class(), value);
        }
        inline app::ByteStateMap_Mapping__Array* create_array(int size) {
            return il2cpp::array_new<app::ByteStateMap_Mapping__Array>(get_class(), size);
        }
        inline app::ByteStateMap_Mapping__Array* create_array(const std::vector<app::ByteStateMap_Mapping>& items) {
            return il2cpp::array_new<app::ByteStateMap_Mapping__Array>(get_class(), items);
        }
    } // namespace ByteStateMap_Mapping
} // namespace app::classes::types
