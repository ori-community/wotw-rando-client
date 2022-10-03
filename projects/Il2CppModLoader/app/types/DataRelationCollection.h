#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRelationCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRelationCollection__Class** type_info;
        inline app::DataRelationCollection__Class* get_class() {
            return il2cpp::get_class<app::DataRelationCollection__Class>(type_info, "System.Data", "DataRelationCollection");
        }
        inline app::DataRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection
} // namespace app::classes::types
