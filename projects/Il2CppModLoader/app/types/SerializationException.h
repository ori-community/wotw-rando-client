#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationException__Class** type_info;
        inline app::SerializationException__Class* get_class() {
            return il2cpp::get_class<app::SerializationException__Class>(type_info, "System.Runtime.Serialization", "SerializationException");
        }
        inline app::SerializationException* create() {
            return il2cpp::create_object<app::SerializationException>(get_class());
        }
    } // namespace SerializationException
} // namespace app::classes::types
