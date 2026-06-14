#pragma once
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion.h>
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientOcclusion {
        inline app::ScreenSpaceAmbientOcclusion__Class** type_info() {
            static app::ScreenSpaceAmbientOcclusion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenSpaceAmbientOcclusion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenSpaceAmbientOcclusion__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceAmbientOcclusion__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientOcclusion");
        }
        inline app::ScreenSpaceAmbientOcclusion* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientOcclusion>(get_class());
        }
    } // namespace ScreenSpaceAmbientOcclusion
} // namespace app::classes::types
