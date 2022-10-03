#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeserializationEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeserializationEventHandler__Class** type_info;
        inline app::DeserializationEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DeserializationEventHandler__Class>(type_info, "System.Runtime.Serialization", "DeserializationEventHandler");
        }
        inline app::DeserializationEventHandler* create() {
            return il2cpp::create_object<app::DeserializationEventHandler>(get_class());
        }
    } // namespace DeserializationEventHandler
} // namespace app::classes::types
