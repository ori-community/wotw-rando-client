#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISwarmLimitRect {
        inline app::ISwarmLimitRect__Class** type_info = (app::ISwarmLimitRect__Class**)(modloader::win::memory::resolve_rva(0x04756470));
        inline app::ISwarmLimitRect__Class* get_class() {
            return il2cpp::get_class<app::ISwarmLimitRect__Class>(type_info, "", "ISwarmLimitRect");
        }
    } // namespace ISwarmLimitRect
} // namespace app::classes::types
