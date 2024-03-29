#pragma once
#include <Modloader/app/structs/Fisheye.h>
#include <Modloader/app/structs/Fisheye__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Fisheye {
        inline app::Fisheye__Class** type_info() {
            static app::Fisheye__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Fisheye__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Fisheye__Class* get_class() {
            return il2cpp::get_class<app::Fisheye__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Fisheye");
        }
        inline app::Fisheye* create() {
            return il2cpp::create_object<app::Fisheye>(get_class());
        }
    } // namespace Fisheye
} // namespace app::classes::types
