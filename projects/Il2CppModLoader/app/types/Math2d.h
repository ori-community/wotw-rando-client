#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Math2d {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Math2d__Class** type_info;
        inline app::Math2d__Class* get_class() {
            return il2cpp::get_class<app::Math2d__Class>(type_info, "Swing", "Math2d");
        }
        inline app::Math2d* create() {
            return il2cpp::create_object<app::Math2d>(get_class());
        }
    } // namespace Math2d
} // namespace app::classes::types
