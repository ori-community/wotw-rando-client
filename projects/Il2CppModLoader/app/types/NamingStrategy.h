#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamingStrategy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamingStrategy__Class** type_info;
        inline app::NamingStrategy__Class* get_class() {
            return il2cpp::get_class<app::NamingStrategy__Class>(type_info, "Newtonsoft.Json.Serialization", "NamingStrategy");
        }
        inline app::NamingStrategy* create() {
            return il2cpp::create_object<app::NamingStrategy>(get_class());
        }
    } // namespace NamingStrategy
} // namespace app::classes::types
