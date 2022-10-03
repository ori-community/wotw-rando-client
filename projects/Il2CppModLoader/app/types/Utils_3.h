#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Utils_3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Utils_3__Class** type_info;
        inline app::Utils_3__Class* get_class() {
            return il2cpp::get_class<app::Utils_3__Class>(type_info, "Moon.Profile", "Utils");
        }
        inline app::Utils_3* create() {
            return il2cpp::create_object<app::Utils_3>(get_class());
        }
    } // namespace Utils_3
} // namespace app::classes::types
