#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionObject__Class** type_info;
        inline app::ReflectionObject__Class* get_class() {
            return il2cpp::get_class<app::ReflectionObject__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionObject");
        }
        inline app::ReflectionObject* create() {
            return il2cpp::create_object<app::ReflectionObject>(get_class());
        }
    } // namespace ReflectionObject
} // namespace app::classes::types
