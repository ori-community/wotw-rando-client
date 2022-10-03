#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrderedDictionary_OrderedDictionaryKeyValueCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class** type_info;
        inline app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::OrderedDictionary_OrderedDictionaryKeyValueCollection__Class>(type_info, "System.Collections.Specialized", "OrderedDictionary", "OrderedDictionaryKeyValueCollection");
        }
        inline app::OrderedDictionary_OrderedDictionaryKeyValueCollection* create() {
            return il2cpp::create_object<app::OrderedDictionary_OrderedDictionaryKeyValueCollection>(get_class());
        }
    } // namespace OrderedDictionary_OrderedDictionaryKeyValueCollection
} // namespace app::classes::types
