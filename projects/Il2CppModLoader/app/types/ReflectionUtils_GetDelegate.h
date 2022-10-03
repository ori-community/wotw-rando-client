#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_GetDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionUtils_GetDelegate__Class** type_info;
        inline app::ReflectionUtils_GetDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_GetDelegate__Class>(type_info, "PlayFab.Json", "ReflectionUtils", "GetDelegate");
        }
        inline app::ReflectionUtils_GetDelegate* create() {
            return il2cpp::create_object<app::ReflectionUtils_GetDelegate>(get_class());
        }
        inline app::ReflectionUtils_GetDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectionUtils_GetDelegate__Array>(get_class(), size);
        }
    } // namespace ReflectionUtils_GetDelegate
} // namespace app::classes::types
