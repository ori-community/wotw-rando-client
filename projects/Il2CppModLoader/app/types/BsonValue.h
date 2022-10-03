#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonValue__Class** type_info;
        inline app::BsonValue__Class* get_class() {
            return il2cpp::get_class<app::BsonValue__Class>(type_info, "Newtonsoft.Json.Bson", "BsonValue");
        }
        inline app::BsonValue* create() {
            return il2cpp::create_object<app::BsonValue>(get_class());
        }
    } // namespace BsonValue
} // namespace app::classes::types
