#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Utils_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Utils_2__Class** type_info;
        inline app::Utils_2__Class* get_class() {
            return il2cpp::get_class<app::Utils_2__Class>(type_info, "", "Utils");
        }
        inline app::Utils_2* create() {
            return il2cpp::create_object<app::Utils_2>(get_class());
        }
    } // namespace Utils_2
} // namespace app::classes::types
