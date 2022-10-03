#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRelationCollection_DataSetRelationCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRelationCollection_DataSetRelationCollection__Class** type_info;
        inline app::DataRelationCollection_DataSetRelationCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataRelationCollection_DataSetRelationCollection__Class>(type_info, "System.Data", "DataRelationCollection", "DataSetRelationCollection");
        }
        inline app::DataRelationCollection_DataSetRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection_DataSetRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection_DataSetRelationCollection
} // namespace app::classes::types
