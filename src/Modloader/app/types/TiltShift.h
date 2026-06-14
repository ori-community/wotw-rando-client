#pragma once
#include <Modloader/app/structs/TiltShift.h>
#include <Modloader/app/structs/TiltShift__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TiltShift {
        inline app::TiltShift__Class** type_info() {
            static app::TiltShift__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TiltShift__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TiltShift__Class* get_class() {
            return il2cpp::get_class<app::TiltShift__Class>(type_info(), "UnityStandardAssets.ImageEffects", "TiltShift");
        }
        inline app::TiltShift* create() {
            return il2cpp::create_object<app::TiltShift>(get_class());
        }
    } // namespace TiltShift
} // namespace app::classes::types
