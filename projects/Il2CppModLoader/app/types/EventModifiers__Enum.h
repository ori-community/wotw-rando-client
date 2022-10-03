#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventModifiers__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventModifiers__Enum__Class** type_info;
        inline app::EventModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventModifiers__Enum__Class>(type_info, "UnityEngine", "EventModifiers");
        }
        inline app::EventModifiers__Enum* create() {
            return il2cpp::create_object<app::EventModifiers__Enum>(get_class());
        }
    } // namespace EventModifiers__Enum
} // namespace app::classes::types
