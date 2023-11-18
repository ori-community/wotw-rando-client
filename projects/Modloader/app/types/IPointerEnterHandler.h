#pragma once
#include <Modloader/app/structs/IPointerEnterHandler.h>
#include <Modloader/app/structs/IPointerEnterHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPointerEnterHandler {
        inline app::IPointerEnterHandler__Class** type_info() {
            static app::IPointerEnterHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPointerEnterHandler__Class**)(modloader::win::memory::resolve_rva(0x047301D0));
            }
            return cache;
        }
        inline app::IPointerEnterHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerEnterHandler__Class>(type_info(), "UnityEngine.EventSystems", "IPointerEnterHandler");
        }
    } // namespace IPointerEnterHandler
} // namespace app::classes::types
