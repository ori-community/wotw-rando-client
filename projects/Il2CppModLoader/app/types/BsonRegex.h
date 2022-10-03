#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonRegex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonRegex__Class** type_info;
        inline app::BsonRegex__Class* get_class() {
            return il2cpp::get_class<app::BsonRegex__Class>(type_info, "Newtonsoft.Json.Bson", "BsonRegex");
        }
        inline app::BsonRegex* create() {
            return il2cpp::create_object<app::BsonRegex>(get_class());
        }
    } // namespace BsonRegex
} // namespace app::classes::types
