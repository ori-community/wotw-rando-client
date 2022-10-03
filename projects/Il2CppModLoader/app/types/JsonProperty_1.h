#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonProperty_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonProperty_1__Class** type_info;
        inline app::JsonProperty_1__Class* get_class() {
            return il2cpp::get_class<app::JsonProperty_1__Class>(type_info, "PlayFab.Json", "JsonProperty");
        }
        inline app::JsonProperty_1* create() {
            return il2cpp::create_object<app::JsonProperty_1>(get_class());
        }
    } // namespace JsonProperty_1
} // namespace app::classes::types
