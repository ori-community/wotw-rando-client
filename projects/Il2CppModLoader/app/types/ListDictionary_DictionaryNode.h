#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionary_DictionaryNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionary_DictionaryNode__Class** type_info;
        inline app::ListDictionary_DictionaryNode__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_DictionaryNode__Class>(type_info, "System.Collections.Specialized", "ListDictionary", "DictionaryNode");
        }
        inline app::ListDictionary_DictionaryNode* create() {
            return il2cpp::create_object<app::ListDictionary_DictionaryNode>(get_class());
        }
    } // namespace ListDictionary_DictionaryNode
} // namespace app::classes::types
