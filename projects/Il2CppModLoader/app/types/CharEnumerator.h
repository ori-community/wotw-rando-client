#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharEnumerator__Class** type_info;
        inline app::CharEnumerator__Class* get_class() {
            return il2cpp::get_class<app::CharEnumerator__Class>(type_info, "System", "CharEnumerator");
        }
        inline app::CharEnumerator* create() {
            return il2cpp::create_object<app::CharEnumerator>(get_class());
        }
    } // namespace CharEnumerator
} // namespace app::classes::types
