#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JValue__Class** type_info;
        inline app::JValue__Class* get_class() {
            return il2cpp::get_class<app::JValue__Class>(type_info, "Newtonsoft.Json.Linq", "JValue");
        }
        inline app::JValue* create() {
            return il2cpp::create_object<app::JValue>(get_class());
        }
    } // namespace JValue
} // namespace app::classes::types
