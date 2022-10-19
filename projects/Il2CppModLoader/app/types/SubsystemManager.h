#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubsystemManager {
        inline app::SubsystemManager__Class** type_info = (app::SubsystemManager__Class**)(modloader::win::memory::resolve_rva(0x0475A6B8));
        inline app::SubsystemManager__Class* get_class() {
            return il2cpp::get_class<app::SubsystemManager__Class>(type_info, "UnityEngine.Experimental", "SubsystemManager");
        }
        inline app::SubsystemManager* create() {
            return il2cpp::create_object<app::SubsystemManager>(get_class());
        }
    } // namespace SubsystemManager
} // namespace app::classes::types
