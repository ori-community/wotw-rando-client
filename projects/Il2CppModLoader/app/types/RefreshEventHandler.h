#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RefreshEventHandler__Class** type_info;
        inline app::RefreshEventHandler__Class* get_class() {
            return il2cpp::get_class<app::RefreshEventHandler__Class>(type_info, "System.ComponentModel", "RefreshEventHandler");
        }
        inline app::RefreshEventHandler* create() {
            return il2cpp::create_object<app::RefreshEventHandler>(get_class());
        }
    } // namespace RefreshEventHandler
} // namespace app::classes::types
