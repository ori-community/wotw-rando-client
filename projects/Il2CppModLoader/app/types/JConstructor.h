#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JConstructor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JConstructor__Class** type_info;
        inline app::JConstructor__Class* get_class() {
            return il2cpp::get_class<app::JConstructor__Class>(type_info, "Newtonsoft.Json.Linq", "JConstructor");
        }
        inline app::JConstructor* create() {
            return il2cpp::create_object<app::JConstructor>(get_class());
        }
    } // namespace JConstructor
} // namespace app::classes::types
