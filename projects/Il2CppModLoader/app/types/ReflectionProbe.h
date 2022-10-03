#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionProbe {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionProbe__Class** type_info;
        inline app::ReflectionProbe__Class* get_class() {
            return il2cpp::get_class<app::ReflectionProbe__Class>(type_info, "UnityEngine", "ReflectionProbe");
        }
        inline app::ReflectionProbe* create() {
            return il2cpp::create_object<app::ReflectionProbe>(get_class());
        }
    } // namespace ReflectionProbe
} // namespace app::classes::types
