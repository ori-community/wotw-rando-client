#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRelation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRelation__Class** type_info;
        inline app::DataRelation__Class* get_class() {
            return il2cpp::get_class<app::DataRelation__Class>(type_info, "System.Data", "DataRelation");
        }
        inline app::DataRelation* create() {
            return il2cpp::create_object<app::DataRelation>(get_class());
        }
        inline app::DataRelation__Array* create_array(int size) {
            return il2cpp::array_new<app::DataRelation__Array>(get_class(), size);
        }
    } // namespace DataRelation
} // namespace app::classes::types
