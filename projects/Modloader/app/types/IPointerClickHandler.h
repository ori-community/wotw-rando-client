#pragma once
#include <Modloader/app/structs/IPointerClickHandler.h>
#include <Modloader/app/structs/IPointerClickHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPointerClickHandler {
        inline app::IPointerClickHandler__Class** type_info() {
            static app::IPointerClickHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPointerClickHandler__Class**)(modloader::win::memory::resolve_rva(0x0470B668));
            }
            return cache;
        }
        inline app::IPointerClickHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerClickHandler__Class>(type_info(), "UnityEngine.EventSystems", "IPointerClickHandler");
        }
    } // namespace IPointerClickHandler
} // namespace app::classes::types
