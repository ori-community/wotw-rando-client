#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRelation__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRelation__Array__Class** type_info;
        inline app::DataRelation__Array__Class* get_class() {
            return il2cpp::get_class<app::DataRelation__Array__Class>(type_info, "System.Data", "DataRelation[]");
        }
        inline app::DataRelation__Array* create() {
            return il2cpp::create_object<app::DataRelation__Array>(get_class());
        }
    } // namespace DataRelation__Array
} // namespace app::classes::types
