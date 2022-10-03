#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_NodeEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionaryInternal_NodeEnumerator__Class** type_info;
        inline app::ListDictionaryInternal_NodeEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_NodeEnumerator__Class>(type_info, "System.Collections", "ListDictionaryInternal", "NodeEnumerator");
        }
        inline app::ListDictionaryInternal_NodeEnumerator* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_NodeEnumerator>(get_class());
        }
    } // namespace ListDictionaryInternal_NodeEnumerator
} // namespace app::classes::types
