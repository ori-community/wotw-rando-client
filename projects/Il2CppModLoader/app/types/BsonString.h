#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonString__Class** type_info;
        inline app::BsonString__Class* get_class() {
            return il2cpp::get_class<app::BsonString__Class>(type_info, "Newtonsoft.Json.Bson", "BsonString");
        }
        inline app::BsonString* create() {
            return il2cpp::create_object<app::BsonString>(get_class());
        }
    } // namespace BsonString
} // namespace app::classes::types
