#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrderedDictionary_OrderedDictionaryEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrderedDictionary_OrderedDictionaryEnumerator__Class** type_info;
        inline app::OrderedDictionary_OrderedDictionaryEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::OrderedDictionary_OrderedDictionaryEnumerator__Class>(type_info, "System.Collections.Specialized", "OrderedDictionary", "OrderedDictionaryEnumerator");
        }
        inline app::OrderedDictionary_OrderedDictionaryEnumerator* create() {
            return il2cpp::create_object<app::OrderedDictionary_OrderedDictionaryEnumerator>(get_class());
        }
    } // namespace OrderedDictionary_OrderedDictionaryEnumerator
} // namespace app::classes::types
