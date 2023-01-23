#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyCameraSettingsAnimator__Class.h>
#include <Modloader/app/structs/LegacyCameraSettingsAnimator.h>

namespace app::classes::types {
    namespace LegacyCameraSettingsAnimator {
        namespace {
            inline app::LegacyCameraSettingsAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyCameraSettingsAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCameraSettingsAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSettingsAnimator__Class>(type_info, "", "LegacyCameraSettingsAnimator");
        }
        inline app::LegacyCameraSettingsAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSettingsAnimator>(get_class());
        }
    } // namespace LegacyCameraSettingsAnimator
} // namespace app::classes::types
