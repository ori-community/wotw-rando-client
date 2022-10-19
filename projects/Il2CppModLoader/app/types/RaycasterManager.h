#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaycasterManager {
        inline app::RaycasterManager__Class** type_info = (app::RaycasterManager__Class**)(modloader::win::memory::resolve_rva(0x0471A7F0));
        inline app::RaycasterManager__Class* get_class() {
            return il2cpp::get_class<app::RaycasterManager__Class>(type_info, "UnityEngine.EventSystems", "RaycasterManager");
        }
        inline app::RaycasterManager* create() {
            return il2cpp::create_object<app::RaycasterManager>(get_class());
        }
    } // namespace RaycasterManager
} // namespace app::classes::types
