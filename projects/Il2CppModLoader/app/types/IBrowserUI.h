#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBrowserUI {
        inline app::IBrowserUI__Class** type_info = (app::IBrowserUI__Class**)(modloader::win::memory::resolve_rva(0x04724ED0));
        inline app::IBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::IBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IBrowserUI");
        }
    } // namespace IBrowserUI
} // namespace app::classes::types
