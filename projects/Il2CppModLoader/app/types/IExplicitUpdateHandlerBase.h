#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandlerBase {
        inline app::IExplicitUpdateHandlerBase__Class** type_info = (app::IExplicitUpdateHandlerBase__Class**)(modloader::win::memory::resolve_rva(0x0475CD70));
        inline app::IExplicitUpdateHandlerBase__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandlerBase__Class>(type_info, "Moon", "IExplicitUpdateHandlerBase");
        }
    } // namespace IExplicitUpdateHandlerBase
} // namespace app::classes::types
