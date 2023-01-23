#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPointerUpHandler__Class.h>

namespace app::classes::types {
    namespace IPointerUpHandler {
        inline app::IPointerUpHandler__Class** type_info = (app::IPointerUpHandler__Class**)(modloader::win::memory::resolve_rva(0x047691B0));
        inline app::IPointerUpHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerUpHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerUpHandler");
        }
    } // namespace IPointerUpHandler
} // namespace app::classes::types
