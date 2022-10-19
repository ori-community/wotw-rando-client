#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRelationCollection_DataSetRelationCollection {
        inline app::DataRelationCollection_DataSetRelationCollection__Class** type_info = (app::DataRelationCollection_DataSetRelationCollection__Class**)(modloader::win::memory::resolve_rva(0x04780C58));
        inline app::DataRelationCollection_DataSetRelationCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataRelationCollection_DataSetRelationCollection__Class>(type_info, "System.Data", "DataRelationCollection", "DataSetRelationCollection");
        }
        inline app::DataRelationCollection_DataSetRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection_DataSetRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection_DataSetRelationCollection
} // namespace app::classes::types
