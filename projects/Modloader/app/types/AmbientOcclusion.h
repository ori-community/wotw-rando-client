#pragma once
#include <Modloader/app/structs/AmbientOcclusion.h>
#include <Modloader/app/structs/AmbientOcclusion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbientOcclusion {
        inline app::AmbientOcclusion__Class** type_info() {
            static app::AmbientOcclusion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmbientOcclusion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmbientOcclusion__Class* get_class() {
            return il2cpp::get_class<app::AmbientOcclusion__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "AmbientOcclusion");
        }
        inline app::AmbientOcclusion* create() {
            return il2cpp::create_object<app::AmbientOcclusion>(get_class());
        }
    } // namespace AmbientOcclusion
} // namespace app::classes::types
