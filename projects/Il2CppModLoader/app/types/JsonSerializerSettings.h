#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializerSettings__Class** type_info;
        inline app::JsonSerializerSettings__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerSettings__Class>(type_info, "Newtonsoft.Json", "JsonSerializerSettings");
        }
        inline app::JsonSerializerSettings* create() {
            return il2cpp::create_object<app::JsonSerializerSettings>(get_class());
        }
    } // namespace JsonSerializerSettings
} // namespace app::classes::types
