#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonObjectId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonObjectId__Class** type_info;
        inline app::BsonObjectId__Class* get_class() {
            return il2cpp::get_class<app::BsonObjectId__Class>(type_info, "Newtonsoft.Json.Bson", "BsonObjectId");
        }
        inline app::BsonObjectId* create() {
            return il2cpp::create_object<app::BsonObjectId>(get_class());
        }
    } // namespace BsonObjectId
} // namespace app::classes::types
