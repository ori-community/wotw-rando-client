#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonException__Class** type_info;
        inline app::JsonException__Class* get_class() {
            return il2cpp::get_class<app::JsonException__Class>(type_info, "Newtonsoft.Json", "JsonException");
        }
        inline app::JsonException* create() {
            return il2cpp::create_object<app::JsonException>(get_class());
        }
    } // namespace JsonException
} // namespace app::classes::types
