#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponPreviewAnimator {
        namespace {
            inline app::WeaponPreviewAnimator__Class* type_info_ref = nullptr;
        }
        inline app::WeaponPreviewAnimator__Class** type_info = &type_info_ref;
        inline app::WeaponPreviewAnimator__Class* get_class() {
            return il2cpp::get_class<app::WeaponPreviewAnimator__Class>(type_info, "", "WeaponPreviewAnimator");
        }
        inline app::WeaponPreviewAnimator* create() {
            return il2cpp::create_object<app::WeaponPreviewAnimator>(get_class());
        }
    } // namespace WeaponPreviewAnimator
} // namespace app::classes::types
