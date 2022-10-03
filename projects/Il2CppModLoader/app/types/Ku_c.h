#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ku_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ku_c__Class** type_info;
        inline app::Ku_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Ku_c__Class>(type_info, "", "Ku", "<>c");
        }
        inline app::Ku_c* create() {
            return il2cpp::create_object<app::Ku_c>(get_class());
        }
    } // namespace Ku_c
} // namespace app::classes::types
