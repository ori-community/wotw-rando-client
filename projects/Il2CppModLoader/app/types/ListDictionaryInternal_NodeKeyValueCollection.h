#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_NodeKeyValueCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionaryInternal_NodeKeyValueCollection__Class** type_info;
        inline app::ListDictionaryInternal_NodeKeyValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_NodeKeyValueCollection__Class>(type_info, "System.Collections", "ListDictionaryInternal", "NodeKeyValueCollection");
        }
        inline app::ListDictionaryInternal_NodeKeyValueCollection* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_NodeKeyValueCollection>(get_class());
        }
    } // namespace ListDictionaryInternal_NodeKeyValueCollection
} // namespace app::classes::types
