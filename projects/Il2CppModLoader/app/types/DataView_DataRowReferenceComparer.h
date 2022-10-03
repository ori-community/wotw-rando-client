#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataView_DataRowReferenceComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataView_DataRowReferenceComparer__Class** type_info;
        inline app::DataView_DataRowReferenceComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::DataView_DataRowReferenceComparer__Class>(type_info, "System.Data", "DataView", "DataRowReferenceComparer");
        }
        inline app::DataView_DataRowReferenceComparer* create() {
            return il2cpp::create_object<app::DataView_DataRowReferenceComparer>(get_class());
        }
    } // namespace DataView_DataRowReferenceComparer
} // namespace app::classes::types
