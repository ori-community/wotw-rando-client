#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInitializePotentialDragHandler {
        inline app::IInitializePotentialDragHandler__Class** type_info = (app::IInitializePotentialDragHandler__Class**)(modloader::win::memory::resolve_rva(0x0476DDA8));
        inline app::IInitializePotentialDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IInitializePotentialDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
        }
    } // namespace IInitializePotentialDragHandler
} // namespace app::classes::types
