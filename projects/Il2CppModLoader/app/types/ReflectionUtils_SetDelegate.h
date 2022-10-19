#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionUtils_SetDelegate {
        inline app::ReflectionUtils_SetDelegate__Class** type_info = (app::ReflectionUtils_SetDelegate__Class**)(modloader::win::memory::resolve_rva(0x04763568));
        inline app::ReflectionUtils_SetDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_SetDelegate__Class>(type_info, "PlayFab.Json", "ReflectionUtils", "SetDelegate");
        }
        inline app::ReflectionUtils_SetDelegate* create() {
            return il2cpp::create_object<app::ReflectionUtils_SetDelegate>(get_class());
        }
    } // namespace ReflectionUtils_SetDelegate
} // namespace app::classes::types
