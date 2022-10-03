#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCameraSettingsAnimator {
        namespace {
            app::LegacyCameraSettingsAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyCameraSettingsAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCameraSettingsAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSettingsAnimator__Class>(type_info, "", "LegacyCameraSettingsAnimator");
        }
        inline app::LegacyCameraSettingsAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSettingsAnimator>(get_class());
        }
    } // namespace LegacyCameraSettingsAnimator
} // namespace app::classes::types
