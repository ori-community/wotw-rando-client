#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonWriter__Class** type_info;
        inline app::BsonWriter__Class* get_class() {
            return il2cpp::get_class<app::BsonWriter__Class>(type_info, "Newtonsoft.Json.Bson", "BsonWriter");
        }
        inline app::BsonWriter* create() {
            return il2cpp::create_object<app::BsonWriter>(get_class());
        }
    } // namespace BsonWriter
} // namespace app::classes::types
