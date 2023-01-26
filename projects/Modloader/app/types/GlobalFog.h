#pragma once
#include <Modloader/app/structs/GlobalFog.h>
#include <Modloader/app/structs/GlobalFog__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalFog {
        inline app::GlobalFog__Class** type_info() {
            static app::GlobalFog__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalFog__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalFog__Class* get_class() {
            return il2cpp::get_class<app::GlobalFog__Class>(type_info(), "UnityStandardAssets.ImageEffects", "GlobalFog");
        }
        inline app::GlobalFog* create() {
            return il2cpp::create_object<app::GlobalFog>(get_class());
        }
    } // namespace GlobalFog
} // namespace app::classes::types
