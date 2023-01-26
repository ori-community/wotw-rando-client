#pragma once
#include <Modloader/app/structs/TiltShift_TiltShiftQuality__Enum.h>
#include <Modloader/app/structs/TiltShift_TiltShiftQuality__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TiltShift_TiltShiftQuality__Enum {
        inline app::TiltShift_TiltShiftQuality__Enum__Class** type_info() {
            static app::TiltShift_TiltShiftQuality__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TiltShift_TiltShiftQuality__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TiltShift_TiltShiftQuality__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TiltShift_TiltShiftQuality__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "TiltShift", "TiltShiftQuality");
        }
        inline app::TiltShift_TiltShiftQuality__Enum* create() {
            return il2cpp::create_object<app::TiltShift_TiltShiftQuality__Enum>(get_class());
        }
    } // namespace TiltShift_TiltShiftQuality__Enum
} // namespace app::classes::types
