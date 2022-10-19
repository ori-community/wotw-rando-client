#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUpdateHandler {
        inline app::IUpdateHandler__Class** type_info = (app::IUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x04768B30));
        inline app::IUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandler__Class>(type_info, "Moon", "IUpdateHandler");
        }
    } // namespace IUpdateHandler
} // namespace app::classes::types
