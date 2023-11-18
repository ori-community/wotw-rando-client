#pragma once
#include <Modloader/app/structs/Vortex.h>
#include <Modloader/app/structs/Vortex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vortex {
        inline app::Vortex__Class** type_info() {
            static app::Vortex__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vortex__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vortex__Class* get_class() {
            return il2cpp::get_class<app::Vortex__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Vortex");
        }
        inline app::Vortex* create() {
            return il2cpp::create_object<app::Vortex>(get_class());
        }
    } // namespace Vortex
} // namespace app::classes::types
