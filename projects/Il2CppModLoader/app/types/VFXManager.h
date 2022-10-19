#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VFXManager {
        inline app::VFXManager__Class** type_info = (app::VFXManager__Class**)(modloader::win::memory::resolve_rva(0x0470FE68));
        inline app::VFXManager__Class* get_class() {
            return il2cpp::get_class<app::VFXManager__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXManager");
        }
        inline app::VFXManager* create() {
            return il2cpp::create_object<app::VFXManager>(get_class());
        }
    } // namespace VFXManager
} // namespace app::classes::types
