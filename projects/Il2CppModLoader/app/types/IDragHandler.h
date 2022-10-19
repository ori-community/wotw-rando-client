#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDragHandler {
        inline app::IDragHandler__Class** type_info = (app::IDragHandler__Class**)(modloader::win::memory::resolve_rva(0x04767630));
        inline app::IDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IDragHandler");
        }
    } // namespace IDragHandler
} // namespace app::classes::types
