#pragma once
#include <Modloader/app/structs/ILayoutSelfController.h>
#include <Modloader/app/structs/ILayoutSelfController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILayoutSelfController {
        inline app::ILayoutSelfController__Class** type_info() {
            static app::ILayoutSelfController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILayoutSelfController__Class**)(modloader::win::memory::resolve_rva(0x0474CF80));
            }
            return cache;
        }
        inline app::ILayoutSelfController__Class* get_class() {
            return il2cpp::get_class<app::ILayoutSelfController__Class>(type_info(), "UnityEngine.UI", "ILayoutSelfController");
        }
    } // namespace ILayoutSelfController
} // namespace app::classes::types
