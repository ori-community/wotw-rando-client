#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPointerUpHandler {
        inline app::IPointerUpHandler__Class** type_info = (app::IPointerUpHandler__Class**)(modloader::win::memory::resolve_rva(0x047691B0));
        inline app::IPointerUpHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerUpHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerUpHandler");
        }
    } // namespace IPointerUpHandler
} // namespace app::classes::types
