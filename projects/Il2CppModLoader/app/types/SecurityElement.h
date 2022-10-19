#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityElement {
        inline app::SecurityElement__Class** type_info = (app::SecurityElement__Class**)(modloader::win::memory::resolve_rva(0x047225F0));
        inline app::SecurityElement__Class* get_class() {
            return il2cpp::get_class<app::SecurityElement__Class>(type_info, "System.Security", "SecurityElement");
        }
        inline app::SecurityElement* create() {
            return il2cpp::create_object<app::SecurityElement>(get_class());
        }
    } // namespace SecurityElement
} // namespace app::classes::types
