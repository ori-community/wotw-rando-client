#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmptyReadOnlyDictionaryInternal_NodeEnumerator {
        inline app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class** type_info = (app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475B4A8));
        inline app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::EmptyReadOnlyDictionaryInternal_NodeEnumerator__Class>(type_info, "System.Collections", "EmptyReadOnlyDictionaryInternal", "NodeEnumerator");
        }
        inline app::EmptyReadOnlyDictionaryInternal_NodeEnumerator* create() {
            return il2cpp::create_object<app::EmptyReadOnlyDictionaryInternal_NodeEnumerator>(get_class());
        }
    } // namespace EmptyReadOnlyDictionaryInternal_NodeEnumerator
} // namespace app::classes::types
