#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LookupNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LookupNode__Class** type_info;
        inline app::LookupNode__Class* get_class() {
            return il2cpp::get_class<app::LookupNode__Class>(type_info, "System.Data", "LookupNode");
        }
        inline app::LookupNode* create() {
            return il2cpp::create_object<app::LookupNode>(get_class());
        }
    } // namespace LookupNode
} // namespace app::classes::types
