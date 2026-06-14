#pragma once
#include <Modloader/app/structs/ILayoutController.h>
#include <Modloader/app/structs/ILayoutController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILayoutController {
        inline app::ILayoutController__Class** type_info() {
            static app::ILayoutController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILayoutController__Class**)(modloader::win::memory::resolve_rva(0x04781338));
            }
            return cache;
        }
        inline app::ILayoutController__Class* get_class() {
            return il2cpp::get_class<app::ILayoutController__Class>(type_info(), "UnityEngine.UI", "ILayoutController");
        }
    } // namespace ILayoutController
} // namespace app::classes::types
