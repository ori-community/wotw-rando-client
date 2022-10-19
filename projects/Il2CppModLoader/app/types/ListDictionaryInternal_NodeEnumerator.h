#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_NodeEnumerator {
        inline app::ListDictionaryInternal_NodeEnumerator__Class** type_info = (app::ListDictionaryInternal_NodeEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475C018));
        inline app::ListDictionaryInternal_NodeEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_NodeEnumerator__Class>(type_info, "System.Collections", "ListDictionaryInternal", "NodeEnumerator");
        }
        inline app::ListDictionaryInternal_NodeEnumerator* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_NodeEnumerator>(get_class());
        }
    } // namespace ListDictionaryInternal_NodeEnumerator
} // namespace app::classes::types
