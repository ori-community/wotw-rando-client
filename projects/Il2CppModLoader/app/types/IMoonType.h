#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonType {
        inline app::IMoonType__Class** type_info = (app::IMoonType__Class**)(modloader::win::memory::resolve_rva(0x0476B508));
        inline app::IMoonType__Class* get_class() {
            return il2cpp::get_class<app::IMoonType__Class>(type_info, "Moon", "IMoonType");
        }
    } // namespace IMoonType
} // namespace app::classes::types
