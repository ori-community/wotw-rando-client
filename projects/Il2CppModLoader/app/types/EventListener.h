#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventListener__Class** type_info;
        inline app::EventListener__Class* get_class() {
            return il2cpp::get_class<app::EventListener__Class>(type_info, "System.Diagnostics.Tracing", "EventListener");
        }
        inline app::EventListener* create() {
            return il2cpp::create_object<app::EventListener>(get_class());
        }
    } // namespace EventListener
} // namespace app::classes::types
