#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JProperty__Class** type_info;
        inline app::JProperty__Class* get_class() {
            return il2cpp::get_class<app::JProperty__Class>(type_info, "Newtonsoft.Json.Linq", "JProperty");
        }
        inline app::JProperty* create() {
            return il2cpp::create_object<app::JProperty>(get_class());
        }
    } // namespace JProperty
} // namespace app::classes::types
