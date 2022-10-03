#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionAttributeProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionAttributeProvider__Class** type_info;
        inline app::ReflectionAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::ReflectionAttributeProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider");
        }
        inline app::ReflectionAttributeProvider* create() {
            return il2cpp::create_object<app::ReflectionAttributeProvider>(get_class());
        }
    } // namespace ReflectionAttributeProvider
} // namespace app::classes::types
