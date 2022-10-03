#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventHandler__Class** type_info;
        inline app::EventHandler__Class* get_class() {
            return il2cpp::get_class<app::EventHandler__Class>(type_info, "System", "EventHandler");
        }
        inline app::EventHandler* create() {
            return il2cpp::create_object<app::EventHandler>(get_class());
        }
    } // namespace EventHandler
} // namespace app::classes::types
