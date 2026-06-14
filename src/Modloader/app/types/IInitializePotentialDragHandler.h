#pragma once
#include <Modloader/app/structs/IInitializePotentialDragHandler.h>
#include <Modloader/app/structs/IInitializePotentialDragHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInitializePotentialDragHandler {
        inline app::IInitializePotentialDragHandler__Class** type_info() {
            static app::IInitializePotentialDragHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInitializePotentialDragHandler__Class**)(modloader::win::memory::resolve_rva(0x0476DDA8));
            }
            return cache;
        }
        inline app::IInitializePotentialDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IInitializePotentialDragHandler__Class>(type_info(), "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
        }
    } // namespace IInitializePotentialDragHandler
} // namespace app::classes::types
