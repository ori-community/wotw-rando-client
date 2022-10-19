#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISelectHandler {
        inline app::ISelectHandler__Class** type_info = (app::ISelectHandler__Class**)(modloader::win::memory::resolve_rva(0x04763450));
        inline app::ISelectHandler__Class* get_class() {
            return il2cpp::get_class<app::ISelectHandler__Class>(type_info, "UnityEngine.EventSystems", "ISelectHandler");
        }
    } // namespace ISelectHandler
} // namespace app::classes::types
