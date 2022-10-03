#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_DictionaryNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionaryInternal_DictionaryNode__Class** type_info;
        inline app::ListDictionaryInternal_DictionaryNode__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_DictionaryNode__Class>(type_info, "System.Collections", "ListDictionaryInternal", "DictionaryNode");
        }
        inline app::ListDictionaryInternal_DictionaryNode* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_DictionaryNode>(get_class());
        }
    } // namespace ListDictionaryInternal_DictionaryNode
} // namespace app::classes::types
