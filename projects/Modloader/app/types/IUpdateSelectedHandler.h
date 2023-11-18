#pragma once
#include <Modloader/app/structs/IUpdateSelectedHandler.h>
#include <Modloader/app/structs/IUpdateSelectedHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateSelectedHandler {
        inline app::IUpdateSelectedHandler__Class** type_info() {
            static app::IUpdateSelectedHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUpdateSelectedHandler__Class**)(modloader::win::memory::resolve_rva(0x047388A8));
            }
            return cache;
        }
        inline app::IUpdateSelectedHandler__Class* get_class() {
            return il2cpp::get_class<app::IUpdateSelectedHandler__Class>(type_info(), "UnityEngine.EventSystems", "IUpdateSelectedHandler");
        }
    } // namespace IUpdateSelectedHandler
} // namespace app::classes::types
