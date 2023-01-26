#pragma once
#include <Modloader/app/structs/IPointerDownHandler.h>
#include <Modloader/app/structs/IPointerDownHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPointerDownHandler {
        inline app::IPointerDownHandler__Class** type_info() {
            static app::IPointerDownHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPointerDownHandler__Class**)(modloader::win::memory::resolve_rva(0x04728688));
            }
            return cache;
        }
        inline app::IPointerDownHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerDownHandler__Class>(type_info(), "UnityEngine.EventSystems", "IPointerDownHandler");
        }
    } // namespace IPointerDownHandler
} // namespace app::classes::types
