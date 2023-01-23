#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator__Class.h>
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator.h>

namespace app::classes::types {
    namespace LegacyCameraSettingsDistanceBasedAnimator {
        namespace {
            inline app::LegacyCameraSettingsDistanceBasedAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyCameraSettingsDistanceBasedAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCameraSettingsDistanceBasedAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSettingsDistanceBasedAnimator__Class>(type_info, "", "LegacyCameraSettingsDistanceBasedAnimator");
        }
        inline app::LegacyCameraSettingsDistanceBasedAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSettingsDistanceBasedAnimator>(get_class());
        }
    } // namespace LegacyCameraSettingsDistanceBasedAnimator
} // namespace app::classes::types
