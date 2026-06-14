#pragma once
#include <Modloader/app/structs/EdgeDetection.h>
#include <Modloader/app/structs/EdgeDetection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EdgeDetection {
        inline app::EdgeDetection__Class** type_info() {
            static app::EdgeDetection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EdgeDetection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EdgeDetection__Class* get_class() {
            return il2cpp::get_class<app::EdgeDetection__Class>(type_info(), "UnityStandardAssets.ImageEffects", "EdgeDetection");
        }
        inline app::EdgeDetection* create() {
            return il2cpp::create_object<app::EdgeDetection>(get_class());
        }
    } // namespace EdgeDetection
} // namespace app::classes::types
