#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JObject__Class** type_info;
        inline app::JObject__Class* get_class() {
            return il2cpp::get_class<app::JObject__Class>(type_info, "Newtonsoft.Json.Linq", "JObject");
        }
        inline app::JObject* create() {
            return il2cpp::create_object<app::JObject>(get_class());
        }
    } // namespace JObject
} // namespace app::classes::types
