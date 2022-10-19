#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalAppContextSwitches {
        inline app::LocalAppContextSwitches__Class** type_info = (app::LocalAppContextSwitches__Class**)(modloader::win::memory::resolve_rva(0x04728E48));
        inline app::LocalAppContextSwitches__Class* get_class() {
            return il2cpp::get_class<app::LocalAppContextSwitches__Class>(type_info, "System", "LocalAppContextSwitches");
        }
        inline app::LocalAppContextSwitches* create() {
            return il2cpp::create_object<app::LocalAppContextSwitches>(get_class());
        }
    } // namespace LocalAppContextSwitches
} // namespace app::classes::types
