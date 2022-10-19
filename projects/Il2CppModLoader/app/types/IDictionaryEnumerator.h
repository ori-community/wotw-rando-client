#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDictionaryEnumerator {
        inline app::IDictionaryEnumerator__Class** type_info = (app::IDictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x047737D0));
        inline app::IDictionaryEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryEnumerator__Class>(type_info, "System.Collections", "IDictionaryEnumerator");
        }
    } // namespace IDictionaryEnumerator
} // namespace app::classes::types
