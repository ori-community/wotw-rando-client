#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CamelCaseNamingStrategy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CamelCaseNamingStrategy__Class** type_info;
        inline app::CamelCaseNamingStrategy__Class* get_class() {
            return il2cpp::get_class<app::CamelCaseNamingStrategy__Class>(type_info, "Newtonsoft.Json.Serialization", "CamelCaseNamingStrategy");
        }
        inline app::CamelCaseNamingStrategy* create() {
            return il2cpp::create_object<app::CamelCaseNamingStrategy>(get_class());
        }
    } // namespace CamelCaseNamingStrategy
} // namespace app::classes::types
