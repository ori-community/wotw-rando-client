#pragma once
#include <Modloader/app/structs/IEndDragHandler.h>
#include <Modloader/app/structs/IEndDragHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEndDragHandler {
        inline app::IEndDragHandler__Class** type_info() {
            static app::IEndDragHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEndDragHandler__Class**)(modloader::win::memory::resolve_rva(0x0471ACC0));
            }
            return cache;
        }
        inline app::IEndDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IEndDragHandler__Class>(type_info(), "UnityEngine.EventSystems", "IEndDragHandler");
        }
    } // namespace IEndDragHandler
} // namespace app::classes::types
