#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumUtils__Class** type_info;
        inline app::EnumUtils__Class* get_class() {
            return il2cpp::get_class<app::EnumUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "EnumUtils");
        }
        inline app::EnumUtils* create() {
            return il2cpp::create_object<app::EnumUtils>(get_class());
        }
    } // namespace EnumUtils
} // namespace app::classes::types
