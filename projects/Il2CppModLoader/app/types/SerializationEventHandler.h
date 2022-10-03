#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationEventHandler__Class** type_info;
        inline app::SerializationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SerializationEventHandler__Class>(type_info, "System.Runtime.Serialization", "SerializationEventHandler");
        }
        inline app::SerializationEventHandler* create() {
            return il2cpp::create_object<app::SerializationEventHandler>(get_class());
        }
    } // namespace SerializationEventHandler
} // namespace app::classes::types
