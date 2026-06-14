#pragma once
#include <Modloader/app/structs/UberTurbulanceAnimator.h>
#include <Modloader/app/structs/UberTurbulanceAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTurbulanceAnimator {
        inline app::UberTurbulanceAnimator__Class** type_info() {
            static app::UberTurbulanceAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTurbulanceAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTurbulanceAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberTurbulanceAnimator__Class>(type_info(), "", "UberTurbulanceAnimator");
        }
        inline app::UberTurbulanceAnimator* create() {
            return il2cpp::create_object<app::UberTurbulanceAnimator>(get_class());
        }
    } // namespace UberTurbulanceAnimator
} // namespace app::classes::types
