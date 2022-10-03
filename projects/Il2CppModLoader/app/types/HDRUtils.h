#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDRUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HDRUtils__Class** type_info;
        inline app::HDRUtils__Class* get_class() {
            return il2cpp::get_class<app::HDRUtils__Class>(type_info, "Moon", "HDRUtils");
        }
        inline app::HDRUtils* create() {
            return il2cpp::create_object<app::HDRUtils>(get_class());
        }
    } // namespace HDRUtils
} // namespace app::classes::types
