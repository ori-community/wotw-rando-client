#pragma once
#include <Modloader/app/structs/GlobalTurbulenceMaskAnimator.h>
#include <Modloader/app/structs/GlobalTurbulenceMaskAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalTurbulenceMaskAnimator {
        inline app::GlobalTurbulenceMaskAnimator__Class** type_info() {
            static app::GlobalTurbulenceMaskAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalTurbulenceMaskAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalTurbulenceMaskAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlobalTurbulenceMaskAnimator__Class>(type_info(), "", "GlobalTurbulenceMaskAnimator");
        }
        inline app::GlobalTurbulenceMaskAnimator* create() {
            return il2cpp::create_object<app::GlobalTurbulenceMaskAnimator>(get_class());
        }
    } // namespace GlobalTurbulenceMaskAnimator
} // namespace app::classes::types
