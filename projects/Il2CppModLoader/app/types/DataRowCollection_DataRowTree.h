#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowCollection_DataRowTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRowCollection_DataRowTree__Class** type_info;
        inline app::DataRowCollection_DataRowTree__Class* get_class() {
            return il2cpp::get_nested_class<app::DataRowCollection_DataRowTree__Class>(type_info, "System.Data", "DataRowCollection", "DataRowTree");
        }
        inline app::DataRowCollection_DataRowTree* create() {
            return il2cpp::create_object<app::DataRowCollection_DataRowTree>(get_class());
        }
    } // namespace DataRowCollection_DataRowTree
} // namespace app::classes::types
