#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_HashtableEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Hashtable_HashtableEnumerator__Class** type_info;
        inline app::Hashtable_HashtableEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_HashtableEnumerator__Class>(type_info, "System.Collections", "Hashtable", "HashtableEnumerator");
        }
        inline app::Hashtable_HashtableEnumerator* create() {
            return il2cpp::create_object<app::Hashtable_HashtableEnumerator>(get_class());
        }
    } // namespace Hashtable_HashtableEnumerator
} // namespace app::classes::types
