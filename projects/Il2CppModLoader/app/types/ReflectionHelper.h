#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionHelper__Class** type_info;
        inline app::ReflectionHelper__Class* get_class() {
            return il2cpp::get_class<app::ReflectionHelper__Class>(type_info, "System.Xml.Serialization", "ReflectionHelper");
        }
        inline app::ReflectionHelper* create() {
            return il2cpp::create_object<app::ReflectionHelper>(get_class());
        }
    } // namespace ReflectionHelper
} // namespace app::classes::types
