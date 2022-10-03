#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Index_IndexTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Index_IndexTree__Class** type_info;
        inline app::Index_IndexTree__Class* get_class() {
            return il2cpp::get_nested_class<app::Index_IndexTree__Class>(type_info, "System.Data", "Index", "IndexTree");
        }
        inline app::Index_IndexTree* create() {
            return il2cpp::create_object<app::Index_IndexTree>(get_class());
        }
    } // namespace Index_IndexTree
} // namespace app::classes::types
