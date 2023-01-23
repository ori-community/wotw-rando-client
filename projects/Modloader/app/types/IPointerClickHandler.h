#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPointerClickHandler__Class.h>

namespace app::classes::types {
    namespace IPointerClickHandler {
        inline app::IPointerClickHandler__Class** type_info = (app::IPointerClickHandler__Class**)(modloader::win::memory::resolve_rva(0x0470B668));
        inline app::IPointerClickHandler__Class* get_class() {
            return il2cpp::get_class<app::IPointerClickHandler__Class>(type_info, "UnityEngine.EventSystems", "IPointerClickHandler");
        }
    } // namespace IPointerClickHandler
} // namespace app::classes::types
