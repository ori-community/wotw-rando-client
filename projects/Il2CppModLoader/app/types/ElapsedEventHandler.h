#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElapsedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ElapsedEventHandler__Class** type_info;
        inline app::ElapsedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ElapsedEventHandler__Class>(type_info, "System.Timers", "ElapsedEventHandler");
        }
        inline app::ElapsedEventHandler* create() {
            return il2cpp::create_object<app::ElapsedEventHandler>(get_class());
        }
    } // namespace ElapsedEventHandler
} // namespace app::classes::types
