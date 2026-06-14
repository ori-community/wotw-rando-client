#pragma once
#include <Modloader/app/structs/SunShafts.h>
#include <Modloader/app/structs/SunShafts__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SunShafts {
        inline app::SunShafts__Class** type_info() {
            static app::SunShafts__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SunShafts__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SunShafts__Class* get_class() {
            return il2cpp::get_class<app::SunShafts__Class>(type_info(), "UnityStandardAssets.ImageEffects", "SunShafts");
        }
        inline app::SunShafts* create() {
            return il2cpp::create_object<app::SunShafts>(get_class());
        }
    } // namespace SunShafts
} // namespace app::classes::types
