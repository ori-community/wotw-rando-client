#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonPropertyCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonPropertyCollection__Class** type_info;
        inline app::JsonPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::JsonPropertyCollection__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
        }
        inline app::JsonPropertyCollection* create() {
            return il2cpp::create_object<app::JsonPropertyCollection>(get_class());
        }
    } // namespace JsonPropertyCollection
} // namespace app::classes::types
