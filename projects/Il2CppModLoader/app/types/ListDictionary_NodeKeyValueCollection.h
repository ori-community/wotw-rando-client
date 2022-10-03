#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionary_NodeKeyValueCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionary_NodeKeyValueCollection__Class** type_info;
        inline app::ListDictionary_NodeKeyValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_NodeKeyValueCollection__Class>(type_info, "System.Collections.Specialized", "ListDictionary", "NodeKeyValueCollection");
        }
        inline app::ListDictionary_NodeKeyValueCollection* create() {
            return il2cpp::create_object<app::ListDictionary_NodeKeyValueCollection>(get_class());
        }
    } // namespace ListDictionary_NodeKeyValueCollection
} // namespace app::classes::types
