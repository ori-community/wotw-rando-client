#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICancelHandler__Class.h>

namespace app::classes::types {
    namespace ICancelHandler {
        inline app::ICancelHandler__Class** type_info = (app::ICancelHandler__Class**)(modloader::win::memory::resolve_rva(0x0475B4A0));
        inline app::ICancelHandler__Class* get_class() {
            return il2cpp::get_class<app::ICancelHandler__Class>(type_info, "UnityEngine.EventSystems", "ICancelHandler");
        }
    } // namespace ICancelHandler
} // namespace app::classes::types
