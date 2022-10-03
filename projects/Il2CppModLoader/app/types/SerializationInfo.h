#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationInfo__Class** type_info;
        inline app::SerializationInfo__Class* get_class() {
            return il2cpp::get_class<app::SerializationInfo__Class>(type_info, "System.Runtime.Serialization", "SerializationInfo");
        }
        inline app::SerializationInfo* create() {
            return il2cpp::create_object<app::SerializationInfo>(get_class());
        }
    } // namespace SerializationInfo
} // namespace app::classes::types
