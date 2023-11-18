#pragma once
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator.h>
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyCameraSettingsDistanceBasedAnimator {
        inline app::LegacyCameraSettingsDistanceBasedAnimator__Class** type_info() {
            static app::LegacyCameraSettingsDistanceBasedAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyCameraSettingsDistanceBasedAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyCameraSettingsDistanceBasedAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSettingsDistanceBasedAnimator__Class>(type_info(), "", "LegacyCameraSettingsDistanceBasedAnimator");
        }
        inline app::LegacyCameraSettingsDistanceBasedAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSettingsDistanceBasedAnimator>(get_class());
        }
    } // namespace LegacyCameraSettingsDistanceBasedAnimator
} // namespace app::classes::types
