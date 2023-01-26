#pragma once
#include <Modloader/app/structs/IBeginDragHandler.h>
#include <Modloader/app/structs/IBeginDragHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBeginDragHandler {
        inline app::IBeginDragHandler__Class** type_info() {
            static app::IBeginDragHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBeginDragHandler__Class**)(modloader::win::memory::resolve_rva(0x047186B0));
            }
            return cache;
        }
        inline app::IBeginDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IBeginDragHandler__Class>(type_info(), "UnityEngine.EventSystems", "IBeginDragHandler");
        }
    } // namespace IBeginDragHandler
} // namespace app::classes::types
