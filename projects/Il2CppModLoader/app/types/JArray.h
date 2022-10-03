#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JArray__Class** type_info;
        inline app::JArray__Class* get_class() {
            return il2cpp::get_class<app::JArray__Class>(type_info, "Newtonsoft.Json.Linq", "JArray");
        }
        inline app::JArray* create() {
            return il2cpp::create_object<app::JArray>(get_class());
        }
    } // namespace JArray
} // namespace app::classes::types
