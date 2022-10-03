#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionUtils__Class** type_info;
        inline app::ReflectionUtils__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionUtils");
        }
        inline app::ReflectionUtils* create() {
            return il2cpp::create_object<app::ReflectionUtils>(get_class());
        }
    } // namespace ReflectionUtils
} // namespace app::classes::types
