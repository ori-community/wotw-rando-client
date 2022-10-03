#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroupEnumerator__Class** type_info;
        inline app::GroupEnumerator__Class* get_class() {
            return il2cpp::get_class<app::GroupEnumerator__Class>(type_info, "System.Text.RegularExpressions", "GroupEnumerator");
        }
        inline app::GroupEnumerator* create() {
            return il2cpp::create_object<app::GroupEnumerator>(get_class());
        }
    } // namespace GroupEnumerator
} // namespace app::classes::types
