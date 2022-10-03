#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArraySubsetEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArraySubsetEnumerator__Class** type_info;
        inline app::ArraySubsetEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ArraySubsetEnumerator__Class>(type_info, "System.ComponentModel", "ArraySubsetEnumerator");
        }
        inline app::ArraySubsetEnumerator* create() {
            return il2cpp::create_object<app::ArraySubsetEnumerator>(get_class());
        }
    } // namespace ArraySubsetEnumerator
} // namespace app::classes::types
