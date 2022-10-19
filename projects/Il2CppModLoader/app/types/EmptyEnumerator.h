#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmptyEnumerator {
        inline app::EmptyEnumerator__Class** type_info = (app::EmptyEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472E118));
        inline app::EmptyEnumerator__Class* get_class() {
            return il2cpp::get_class<app::EmptyEnumerator__Class>(type_info, "System.Xml", "EmptyEnumerator");
        }
        inline app::EmptyEnumerator* create() {
            return il2cpp::create_object<app::EmptyEnumerator>(get_class());
        }
    } // namespace EmptyEnumerator
} // namespace app::classes::types
