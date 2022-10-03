#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonTypeReflector_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonTypeReflector_c__Class** type_info;
        inline app::JsonTypeReflector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonTypeReflector_c__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonTypeReflector", "<>c");
        }
        inline app::JsonTypeReflector_c* create() {
            return il2cpp::create_object<app::JsonTypeReflector_c>(get_class());
        }
    } // namespace JsonTypeReflector_c
} // namespace app::classes::types
