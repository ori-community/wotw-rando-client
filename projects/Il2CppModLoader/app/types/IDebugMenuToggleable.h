#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDebugMenuToggleable {
        inline app::IDebugMenuToggleable__Class** type_info = (app::IDebugMenuToggleable__Class**)(modloader::win::memory::resolve_rva(0x04740288));
        inline app::IDebugMenuToggleable__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuToggleable__Class>(type_info, "", "IDebugMenuToggleable");
        }
    } // namespace IDebugMenuToggleable
} // namespace app::classes::types
