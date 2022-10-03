#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonBinary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonBinary__Class** type_info;
        inline app::BsonBinary__Class* get_class() {
            return il2cpp::get_class<app::BsonBinary__Class>(type_info, "Newtonsoft.Json.Bson", "BsonBinary");
        }
        inline app::BsonBinary* create() {
            return il2cpp::create_object<app::BsonBinary>(get_class());
        }
    } // namespace BsonBinary
} // namespace app::classes::types
