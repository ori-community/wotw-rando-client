#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IScrollHandler {
        inline app::IScrollHandler__Class** type_info = (app::IScrollHandler__Class**)(modloader::win::memory::resolve_rva(0x0472FFF0));
        inline app::IScrollHandler__Class* get_class() {
            return il2cpp::get_class<app::IScrollHandler__Class>(type_info, "UnityEngine.EventSystems", "IScrollHandler");
        }
    } // namespace IScrollHandler
} // namespace app::classes::types
