#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonObject__Class** type_info;
        inline app::BsonObject__Class* get_class() {
            return il2cpp::get_class<app::BsonObject__Class>(type_info, "Newtonsoft.Json.Bson", "BsonObject");
        }
        inline app::BsonObject* create() {
            return il2cpp::create_object<app::BsonObject>(get_class());
        }
    } // namespace BsonObject
} // namespace app::classes::types
