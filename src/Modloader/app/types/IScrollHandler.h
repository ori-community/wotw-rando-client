#pragma once
#include <Modloader/app/structs/IScrollHandler.h>
#include <Modloader/app/structs/IScrollHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IScrollHandler {
        inline app::IScrollHandler__Class** type_info() {
            static app::IScrollHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IScrollHandler__Class**)(modloader::win::memory::resolve_rva(0x0472FFF0));
            }
            return cache;
        }
        inline app::IScrollHandler__Class* get_class() {
            return il2cpp::get_class<app::IScrollHandler__Class>(type_info(), "UnityEngine.EventSystems", "IScrollHandler");
        }
    } // namespace IScrollHandler
} // namespace app::classes::types
