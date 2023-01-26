#pragma once
#include <Modloader/app/structs/BloomOptimized.h>
#include <Modloader/app/structs/BloomOptimized__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloomOptimized {
        inline app::BloomOptimized__Class** type_info() {
            static app::BloomOptimized__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BloomOptimized__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BloomOptimized__Class* get_class() {
            return il2cpp::get_class<app::BloomOptimized__Class>(type_info(), "UnityStandardAssets.ImageEffects", "BloomOptimized");
        }
        inline app::BloomOptimized* create() {
            return il2cpp::create_object<app::BloomOptimized>(get_class());
        }
    } // namespace BloomOptimized
} // namespace app::classes::types
