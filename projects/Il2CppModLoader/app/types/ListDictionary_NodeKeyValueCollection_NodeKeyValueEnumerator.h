#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator {
        inline app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class** type_info = (app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04763D48));
        inline app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator__Class>(type_info, "System.Collections.Specialized", "ListDictionary+NodeKeyValueCollection", "NodeKeyValueEnumerator");
        }
        inline app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator* create() {
            return il2cpp::create_object<app::ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator>(get_class());
        }
    } // namespace ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator
} // namespace app::classes::types
