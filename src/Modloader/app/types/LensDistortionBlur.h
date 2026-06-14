#pragma once
#include <Modloader/app/structs/LensDistortionBlur.h>
#include <Modloader/app/structs/LensDistortionBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensDistortionBlur {
        inline app::LensDistortionBlur__Class** type_info() {
            static app::LensDistortionBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensDistortionBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensDistortionBlur__Class* get_class() {
            return il2cpp::get_class<app::LensDistortionBlur__Class>(type_info(), "Colorful", "LensDistortionBlur");
        }
        inline app::LensDistortionBlur* create() {
            return il2cpp::create_object<app::LensDistortionBlur>(get_class());
        }
    } // namespace LensDistortionBlur
} // namespace app::classes::types
