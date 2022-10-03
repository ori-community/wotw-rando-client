#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuDash_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KuDash_c__Class** type_info;
        inline app::KuDash_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KuDash_c__Class>(type_info, "", "KuDash", "<>c");
        }
        inline app::KuDash_c* create() {
            return il2cpp::create_object<app::KuDash_c>(get_class());
        }
    } // namespace KuDash_c
} // namespace app::classes::types
