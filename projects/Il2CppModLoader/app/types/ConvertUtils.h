#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConvertUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConvertUtils__Class** type_info;
        inline app::ConvertUtils__Class* get_class() {
            return il2cpp::get_class<app::ConvertUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "ConvertUtils");
        }
        inline app::ConvertUtils* create() {
            return il2cpp::create_object<app::ConvertUtils>(get_class());
        }
    } // namespace ConvertUtils
} // namespace app::classes::types
