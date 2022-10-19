#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFlameHandler {
        inline app::IFlameHandler__Class** type_info = (app::IFlameHandler__Class**)(modloader::win::memory::resolve_rva(0x0470CF60));
        inline app::IFlameHandler__Class* get_class() {
            return il2cpp::get_class<app::IFlameHandler__Class>(type_info, "Moon", "IFlameHandler");
        }
    } // namespace IFlameHandler
} // namespace app::classes::types
