#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyEnumerator__Class** type_info;
        inline app::EmptyEnumerator__Class* get_class() {
            return il2cpp::get_class<app::EmptyEnumerator__Class>(type_info, "System.Xml", "EmptyEnumerator");
        }
        inline app::EmptyEnumerator* create() {
            return il2cpp::create_object<app::EmptyEnumerator>(get_class());
        }
    } // namespace EmptyEnumerator
} // namespace app::classes::types
