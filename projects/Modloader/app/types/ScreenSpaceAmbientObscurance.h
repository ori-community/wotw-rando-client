#pragma once
#include <Modloader/app/structs/ScreenSpaceAmbientObscurance.h>
#include <Modloader/app/structs/ScreenSpaceAmbientObscurance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientObscurance {
        inline app::ScreenSpaceAmbientObscurance__Class** type_info() {
            static app::ScreenSpaceAmbientObscurance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenSpaceAmbientObscurance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenSpaceAmbientObscurance__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceAmbientObscurance__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientObscurance");
        }
        inline app::ScreenSpaceAmbientObscurance* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientObscurance>(get_class());
        }
    } // namespace ScreenSpaceAmbientObscurance
} // namespace app::classes::types
