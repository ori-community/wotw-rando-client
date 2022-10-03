#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonObjectIdConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonObjectIdConverter__Class** type_info;
        inline app::BsonObjectIdConverter__Class* get_class() {
            return il2cpp::get_class<app::BsonObjectIdConverter__Class>(type_info, "Newtonsoft.Json.Converters", "BsonObjectIdConverter");
        }
        inline app::BsonObjectIdConverter* create() {
            return il2cpp::create_object<app::BsonObjectIdConverter>(get_class());
        }
    } // namespace BsonObjectIdConverter
} // namespace app::classes::types
