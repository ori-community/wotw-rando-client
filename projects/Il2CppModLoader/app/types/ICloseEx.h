#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICloseEx {
        inline app::ICloseEx__Class** type_info = (app::ICloseEx__Class**)(modloader::win::memory::resolve_rva(0x04739788));
        inline app::ICloseEx__Class* get_class() {
            return il2cpp::get_class<app::ICloseEx__Class>(type_info, "System.Net", "ICloseEx");
        }
    } // namespace ICloseEx
} // namespace app::classes::types
