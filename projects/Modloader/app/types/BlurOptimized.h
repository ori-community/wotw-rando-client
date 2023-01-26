#pragma once
#include <Modloader/app/structs/BlurOptimized.h>
#include <Modloader/app/structs/BlurOptimized__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlurOptimized {
        inline app::BlurOptimized__Class** type_info() {
            static app::BlurOptimized__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlurOptimized__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlurOptimized__Class* get_class() {
            return il2cpp::get_class<app::BlurOptimized__Class>(type_info(), "UnityStandardAssets.ImageEffects", "BlurOptimized");
        }
        inline app::BlurOptimized* create() {
            return il2cpp::create_object<app::BlurOptimized>(get_class());
        }
    } // namespace BlurOptimized
} // namespace app::classes::types
