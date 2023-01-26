#pragma once
#include <Modloader/app/structs/DataRowCollection_DataRowTree.h>
#include <Modloader/app/structs/DataRowCollection_DataRowTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowCollection_DataRowTree {
        inline app::DataRowCollection_DataRowTree__Class** type_info() {
            static app::DataRowCollection_DataRowTree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRowCollection_DataRowTree__Class**)(modloader::win::memory::resolve_rva(0x04709B10));
            }
            return cache;
        }
        inline app::DataRowCollection_DataRowTree__Class* get_class() {
            return il2cpp::get_nested_class<app::DataRowCollection_DataRowTree__Class>(type_info(), "System.Data", "DataRowCollection", "DataRowTree");
        }
        inline app::DataRowCollection_DataRowTree* create() {
            return il2cpp::create_object<app::DataRowCollection_DataRowTree>(get_class());
        }
    } // namespace DataRowCollection_DataRowTree
} // namespace app::classes::types
