#pragma once
#include <Modloader/app/structs/IDragHandler.h>
#include <Modloader/app/structs/IDragHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDragHandler {
        inline app::IDragHandler__Class** type_info() {
            static app::IDragHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDragHandler__Class**)(modloader::win::memory::resolve_rva(0x04767630));
            }
            return cache;
        }
        inline app::IDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IDragHandler__Class>(type_info(), "UnityEngine.EventSystems", "IDragHandler");
        }
    } // namespace IDragHandler
} // namespace app::classes::types
