#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonArray__Class** type_info;
        inline app::BsonArray__Class* get_class() {
            return il2cpp::get_class<app::BsonArray__Class>(type_info, "Newtonsoft.Json.Bson", "BsonArray");
        }
        inline app::BsonArray* create() {
            return il2cpp::create_object<app::BsonArray>(get_class());
        }
    } // namespace BsonArray
} // namespace app::classes::types
