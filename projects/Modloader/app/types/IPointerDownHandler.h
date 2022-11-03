#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPointerDownHandler {
        inline app::IPointerDownHandler__Class** type_info = (app::IPointerDownHandler__Class**)(modloader::win::memory::resolve_rva(0x04728688));
        inline app::IPointerDownHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerDownHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerDownHandler");
        }
    } // namespace IPointerDownHandler
} // namespace app::classes::types
