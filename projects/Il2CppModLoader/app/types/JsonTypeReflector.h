#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonTypeReflector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonTypeReflector__Class** type_info;
        inline app::JsonTypeReflector__Class* get_class() {
            return il2cpp::get_class<app::JsonTypeReflector__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonTypeReflector");
        }
        inline app::JsonTypeReflector* create() {
            return il2cpp::create_object<app::JsonTypeReflector>(get_class());
        }
    } // namespace JsonTypeReflector
} // namespace app::classes::types
