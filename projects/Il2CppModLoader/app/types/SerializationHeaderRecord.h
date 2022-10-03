#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationHeaderRecord {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationHeaderRecord__Class** type_info;
        inline app::SerializationHeaderRecord__Class* get_class() {
            return il2cpp::get_class<app::SerializationHeaderRecord__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
        }
        inline app::SerializationHeaderRecord* create() {
            return il2cpp::create_object<app::SerializationHeaderRecord>(get_class());
        }
    } // namespace SerializationHeaderRecord
} // namespace app::classes::types
