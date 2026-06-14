#pragma once
#include <Modloader/app/structs/IPointerUpHandler.h>
#include <Modloader/app/structs/IPointerUpHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPointerUpHandler {
        inline app::IPointerUpHandler__Class** type_info() {
            static app::IPointerUpHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPointerUpHandler__Class**)(modloader::win::memory::resolve_rva(0x047691B0));
            }
            return cache;
        }
        inline app::IPointerUpHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerUpHandler__Class>(type_info(), "UnityEngine.EventSystems", "IPointerUpHandler");
        }
    } // namespace IPointerUpHandler
} // namespace app::classes::types
