#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class** type_info;
        inline app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class>(type_info, "System.Collections.Specialized", "ListDictionary+NodeKeyValueCollection", "NodeKeyValueEnumerator");
        }
        inline app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator* create() {
            return il2cpp::create_object<app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator>(get_class());
        }
    } // namespace ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator
} // namespace app::classes::types
