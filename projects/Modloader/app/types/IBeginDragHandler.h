#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBeginDragHandler__Class.h>

namespace app::classes::types {
    namespace IBeginDragHandler {
        inline app::IBeginDragHandler__Class** type_info = (app::IBeginDragHandler__Class**)(modloader::win::memory::resolve_rva(0x047186B0));
        inline app::IBeginDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IBeginDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IBeginDragHandler");
        }
    } // namespace IBeginDragHandler
} // namespace app::classes::types
