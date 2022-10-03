#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeUtils__Class** type_info;
        inline app::DateTimeUtils__Class* get_class() {
            return il2cpp::get_class<app::DateTimeUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "DateTimeUtils");
        }
        inline app::DateTimeUtils* create() {
            return il2cpp::create_object<app::DateTimeUtils>(get_class());
        }
    } // namespace DateTimeUtils
} // namespace app::classes::types
