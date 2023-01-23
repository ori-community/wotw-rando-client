#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDeselectHandler__Class.h>

namespace app::classes::types {
    namespace IDeselectHandler {
        inline app::IDeselectHandler__Class** type_info = (app::IDeselectHandler__Class**)(modloader::win::memory::resolve_rva(0x04702F08));
        inline app::IDeselectHandler__Class* get_class() {
            return il2cpp::get_class<app::IDeselectHandler__Class>(type_info, "UnityEngine.EventSystems", "IDeselectHandler");
        }
    } // namespace IDeselectHandler
} // namespace app::classes::types
