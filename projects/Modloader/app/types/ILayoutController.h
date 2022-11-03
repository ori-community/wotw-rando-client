#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILayoutController {
        inline app::ILayoutController__Class** type_info = (app::ILayoutController__Class**)(modloader::win::memory::resolve_rva(0x04781338));
        inline app::ILayoutController__Class* get_class() {
            return il2cpp::get_class<app::ILayoutController__Class>(type_info, "UnityEngine.UI", "ILayoutController");
        }
    } // namespace ILayoutController
} // namespace app::classes::types
