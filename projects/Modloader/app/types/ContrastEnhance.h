#pragma once
#include <Modloader/app/structs/ContrastEnhance.h>
#include <Modloader/app/structs/ContrastEnhance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContrastEnhance {
        inline app::ContrastEnhance__Class** type_info() {
            static app::ContrastEnhance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContrastEnhance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContrastEnhance__Class* get_class() {
            return il2cpp::get_class<app::ContrastEnhance__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ContrastEnhance");
        }
        inline app::ContrastEnhance* create() {
            return il2cpp::create_object<app::ContrastEnhance>(get_class());
        }
    } // namespace ContrastEnhance
} // namespace app::classes::types
