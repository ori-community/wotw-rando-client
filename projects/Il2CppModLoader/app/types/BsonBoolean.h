#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonBoolean {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonBoolean__Class** type_info;
        inline app::BsonBoolean__Class* get_class() {
            return il2cpp::get_class<app::BsonBoolean__Class>(type_info, "Newtonsoft.Json.Bson", "BsonBoolean");
        }
        inline app::BsonBoolean* create() {
            return il2cpp::create_object<app::BsonBoolean>(get_class());
        }
    } // namespace BsonBoolean
} // namespace app::classes::types
