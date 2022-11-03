#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPointerExitHandler {
        inline app::IPointerExitHandler__Class** type_info = (app::IPointerExitHandler__Class**)(modloader::win::memory::resolve_rva(0x04790238));
        inline app::IPointerExitHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerExitHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerExitHandler");
        }
    } // namespace IPointerExitHandler
} // namespace app::classes::types
