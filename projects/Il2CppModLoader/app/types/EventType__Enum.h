#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventType__Enum__Class** type_info;
        inline app::EventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventType__Enum__Class>(type_info, "UnityEngine", "EventType");
        }
        inline app::EventType__Enum* create() {
            return il2cpp::create_object<app::EventType__Enum>(get_class());
        }
    } // namespace EventType__Enum
} // namespace app::classes::types
