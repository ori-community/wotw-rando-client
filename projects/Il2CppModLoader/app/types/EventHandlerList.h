#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventHandlerList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventHandlerList__Class** type_info;
        inline app::EventHandlerList__Class* get_class() {
            return il2cpp::get_class<app::EventHandlerList__Class>(type_info, "System.ComponentModel", "EventHandlerList");
        }
        inline app::EventHandlerList* create() {
            return il2cpp::create_object<app::EventHandlerList>(get_class());
        }
    } // namespace EventHandlerList
} // namespace app::classes::types
