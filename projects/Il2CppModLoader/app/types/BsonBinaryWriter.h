#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonBinaryWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonBinaryWriter__Class** type_info;
        inline app::BsonBinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::BsonBinaryWriter__Class>(type_info, "Newtonsoft.Json.Bson", "BsonBinaryWriter");
        }
        inline app::BsonBinaryWriter* create() {
            return il2cpp::create_object<app::BsonBinaryWriter>(get_class());
        }
    } // namespace BsonBinaryWriter
} // namespace app::classes::types
