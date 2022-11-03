#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPointerEnterHandler {
        inline app::IPointerEnterHandler__Class** type_info = (app::IPointerEnterHandler__Class**)(modloader::win::memory::resolve_rva(0x047301D0));
        inline app::IPointerEnterHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerEnterHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerEnterHandler");
        }
    } // namespace IPointerEnterHandler
} // namespace app::classes::types
