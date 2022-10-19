#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUpdateSelectedHandler {
        inline app::IUpdateSelectedHandler__Class** type_info = (app::IUpdateSelectedHandler__Class**)(modloader::win::memory::resolve_rva(0x047388A8));
        inline app::IUpdateSelectedHandler__Class* get_class() {
            return il2cpp::get_class<app::IUpdateSelectedHandler__Class>(type_info, "UnityEngine.EventSystems", "IUpdateSelectedHandler");
        }
    } // namespace IUpdateSelectedHandler
} // namespace app::classes::types
