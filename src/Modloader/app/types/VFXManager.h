#pragma once
#include <Modloader/app/structs/VFXManager.h>
#include <Modloader/app/structs/VFXManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VFXManager {
        inline app::VFXManager__Class** type_info() {
            static app::VFXManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VFXManager__Class**)(modloader::win::memory::resolve_rva(0x0470FE68));
            }
            return cache;
        }
        inline app::VFXManager__Class* get_class() {
            return il2cpp::get_class<app::VFXManager__Class>(type_info(), "UnityEngine.Experimental.VFX", "VFXManager");
        }
        inline app::VFXManager* create() {
            return il2cpp::create_object<app::VFXManager>(get_class());
        }
    } // namespace VFXManager
} // namespace app::classes::types
