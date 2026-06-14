#pragma once
#include <Modloader/app/structs/LegacyCameraSettingsAnimator.h>
#include <Modloader/app/structs/LegacyCameraSettingsAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyCameraSettingsAnimator {
        inline app::LegacyCameraSettingsAnimator__Class** type_info() {
            static app::LegacyCameraSettingsAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyCameraSettingsAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyCameraSettingsAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSettingsAnimator__Class>(type_info(), "", "LegacyCameraSettingsAnimator");
        }
        inline app::LegacyCameraSettingsAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSettingsAnimator>(get_class());
        }
    } // namespace LegacyCameraSettingsAnimator
} // namespace app::classes::types
