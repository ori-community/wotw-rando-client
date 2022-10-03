#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonArray__Class** type_info;
        inline app::JsonArray__Class* get_class() {
            return il2cpp::get_class<app::JsonArray__Class>(type_info, "PlayFab.Json", "JsonArray");
        }
        inline app::JsonArray* create() {
            return il2cpp::create_object<app::JsonArray>(get_class());
        }
    } // namespace JsonArray
} // namespace app::classes::types
