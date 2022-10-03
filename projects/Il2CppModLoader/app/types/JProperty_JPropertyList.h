#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JProperty_JPropertyList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JProperty_JPropertyList__Class** type_info;
        inline app::JProperty_JPropertyList__Class* get_class() {
            return il2cpp::get_nested_class<app::JProperty_JPropertyList__Class>(type_info, "Newtonsoft.Json.Linq", "JProperty", "JPropertyList");
        }
        inline app::JProperty_JPropertyList* create() {
            return il2cpp::create_object<app::JProperty_JPropertyList>(get_class());
        }
    } // namespace JProperty_JPropertyList
} // namespace app::classes::types
