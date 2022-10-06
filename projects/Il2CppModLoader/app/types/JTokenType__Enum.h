#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JTokenType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JTokenType__Enum__Class** type_info;
        inline app::JTokenType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JTokenType__Enum__Class>(type_info, "Newtonsoft.Json.Linq", "JTokenType");
        }
        inline app::JTokenType__Enum* create() {
            return il2cpp::create_object<app::JTokenType__Enum>(get_class());
        }
        inline app::JTokenType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JTokenType__Enum__Array>(get_class(), size);
        }
        inline app::JTokenType__Enum__Array* create_array(const std::vector<app::JTokenType__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::JTokenType__Enum__Array>(get_class(), items);
        }
    } // namespace JTokenType__Enum
} // namespace app::classes::types
