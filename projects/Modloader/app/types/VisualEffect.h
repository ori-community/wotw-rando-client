#pragma once
#include <Modloader/app/structs/VisualEffect.h>
#include <Modloader/app/structs/VisualEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisualEffect {
        inline app::VisualEffect__Class** type_info() {
            static app::VisualEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VisualEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VisualEffect__Class* get_class() {
            return il2cpp::get_class<app::VisualEffect__Class>(type_info(), "UnityEngine.Experimental.VFX", "VisualEffect");
        }
        inline app::VisualEffect* create() {
            return il2cpp::create_object<app::VisualEffect>(get_class());
        }
    } // namespace VisualEffect
} // namespace app::classes::types
