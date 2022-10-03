#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationEventsCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationEventsCache__Class** type_info;
        inline app::SerializationEventsCache__Class* get_class() {
            return il2cpp::get_class<app::SerializationEventsCache__Class>(type_info, "System.Runtime.Serialization", "SerializationEventsCache");
        }
        inline app::SerializationEventsCache* create() {
            return il2cpp::create_object<app::SerializationEventsCache>(get_class());
        }
    } // namespace SerializationEventsCache
} // namespace app::classes::types
