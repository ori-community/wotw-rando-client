#pragma once
#include <Modloader/app/structs/ContrastStretch.h>
#include <Modloader/app/structs/ContrastStretch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContrastStretch {
        inline app::ContrastStretch__Class** type_info() {
            static app::ContrastStretch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContrastStretch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContrastStretch__Class* get_class() {
            return il2cpp::get_class<app::ContrastStretch__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ContrastStretch");
        }
        inline app::ContrastStretch* create() {
            return il2cpp::create_object<app::ContrastStretch>(get_class());
        }
    } // namespace ContrastStretch
} // namespace app::classes::types
