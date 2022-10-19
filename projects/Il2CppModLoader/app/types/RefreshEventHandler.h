#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RefreshEventHandler {
        inline app::RefreshEventHandler__Class** type_info = (app::RefreshEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471EEC0));
        inline app::RefreshEventHandler__Class* get_class() {
            return il2cpp::get_class<app::RefreshEventHandler__Class>(type_info, "System.ComponentModel", "RefreshEventHandler");
        }
        inline app::RefreshEventHandler* create() {
            return il2cpp::create_object<app::RefreshEventHandler>(get_class());
        }
    } // namespace RefreshEventHandler
} // namespace app::classes::types
