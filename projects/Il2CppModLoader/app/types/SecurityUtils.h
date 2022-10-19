#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityUtils {
        inline app::SecurityUtils__Class** type_info = (app::SecurityUtils__Class**)(modloader::win::memory::resolve_rva(0x047482F0));
        inline app::SecurityUtils__Class* get_class() {
            return il2cpp::get_class<app::SecurityUtils__Class>(type_info, "System", "SecurityUtils");
        }
        inline app::SecurityUtils* create() {
            return il2cpp::create_object<app::SecurityUtils>(get_class());
        }
    } // namespace SecurityUtils
} // namespace app::classes::types
