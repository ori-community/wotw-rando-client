#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonObjectAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonObjectAttribute__Class** type_info;
        inline app::JsonObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonObjectAttribute__Class>(type_info, "Newtonsoft.Json", "JsonObjectAttribute");
        }
        inline app::JsonObjectAttribute* create() {
            return il2cpp::create_object<app::JsonObjectAttribute>(get_class());
        }
    } // namespace JsonObjectAttribute
} // namespace app::classes::types
