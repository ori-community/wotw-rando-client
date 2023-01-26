#pragma once
#include <Modloader/app/structs/LaserBeam_ImpactEffectOrientationMethod__Enum.h>
#include <Modloader/app/structs/LaserBeam_ImpactEffectOrientationMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserBeam_ImpactEffectOrientationMethod__Enum {
        inline app::LaserBeam_ImpactEffectOrientationMethod__Enum__Class** type_info() {
            static app::LaserBeam_ImpactEffectOrientationMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserBeam_ImpactEffectOrientationMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserBeam_ImpactEffectOrientationMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserBeam_ImpactEffectOrientationMethod__Enum__Class>(type_info(), "", "LaserBeam", "ImpactEffectOrientationMethod");
        }
        inline app::LaserBeam_ImpactEffectOrientationMethod__Enum* create() {
            return il2cpp::create_object<app::LaserBeam_ImpactEffectOrientationMethod__Enum>(get_class());
        }
    } // namespace LaserBeam_ImpactEffectOrientationMethod__Enum
} // namespace app::classes::types
