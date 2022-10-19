#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Hashtable_HashtableEnumerator {
        inline app::Hashtable_HashtableEnumerator__Class** type_info = (app::Hashtable_HashtableEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04761F08));
        inline app::Hashtable_HashtableEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_HashtableEnumerator__Class>(type_info, "System.Collections", "Hashtable", "HashtableEnumerator");
        }
        inline app::Hashtable_HashtableEnumerator* create() {
            return il2cpp::create_object<app::Hashtable_HashtableEnumerator>(get_class());
        }
    } // namespace Hashtable_HashtableEnumerator
} // namespace app::classes::types
