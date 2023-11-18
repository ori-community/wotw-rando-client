#pragma once
#include <Modloader/app/structs/IPointerExitHandler.h>
#include <Modloader/app/structs/IPointerExitHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPointerExitHandler {
        inline app::IPointerExitHandler__Class** type_info() {
            static app::IPointerExitHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPointerExitHandler__Class**)(modloader::win::memory::resolve_rva(0x04790238));
            }
            return cache;
        }
        inline app::IPointerExitHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerExitHandler__Class>(type_info(), "UnityEngine.EventSystems", "IPointerExitHandler");
        }
    } // namespace IPointerExitHandler
} // namespace app::classes::types
