#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonArrayAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonArrayAttribute__Class** type_info;
        inline app::JsonArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonArrayAttribute__Class>(type_info, "Newtonsoft.Json", "JsonArrayAttribute");
        }
        inline app::JsonArrayAttribute* create() {
            return il2cpp::create_object<app::JsonArrayAttribute>(get_class());
        }
    } // namespace JsonArrayAttribute
} // namespace app::classes::types
