#pragma once
#include <Modloader/app/structs/WeaponPreviewAnimator.h>
#include <Modloader/app/structs/WeaponPreviewAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponPreviewAnimator {
        inline app::WeaponPreviewAnimator__Class** type_info() {
            static app::WeaponPreviewAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponPreviewAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponPreviewAnimator__Class* get_class() {
            return il2cpp::get_class<app::WeaponPreviewAnimator__Class>(type_info(), "", "WeaponPreviewAnimator");
        }
        inline app::WeaponPreviewAnimator* create() {
            return il2cpp::create_object<app::WeaponPreviewAnimator>(get_class());
        }
    } // namespace WeaponPreviewAnimator
} // namespace app::classes::types
