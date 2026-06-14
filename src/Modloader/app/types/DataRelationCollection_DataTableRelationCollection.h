#pragma once
#include <Modloader/app/structs/DataRelationCollection_DataTableRelationCollection.h>
#include <Modloader/app/structs/DataRelationCollection_DataTableRelationCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRelationCollection_DataTableRelationCollection {
        inline app::DataRelationCollection_DataTableRelationCollection__Class** type_info() {
            static app::DataRelationCollection_DataTableRelationCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRelationCollection_DataTableRelationCollection__Class**)(modloader::win::memory::resolve_rva(0x04700DE0));
            }
            return cache;
        }
        inline app::DataRelationCollection_DataTableRelationCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataRelationCollection_DataTableRelationCollection__Class>(type_info(), "System.Data", "DataRelationCollection", "DataTableRelationCollection");
        }
        inline app::DataRelationCollection_DataTableRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection_DataTableRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection_DataTableRelationCollection
} // namespace app::classes::types
