#pragma once
#include <Modloader/app/structs/UberPostProcessAnimator.h>
#include <Modloader/app/structs/UberPostProcessAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostProcessAnimator {
        inline app::UberPostProcessAnimator__Class** type_info() {
            static app::UberPostProcessAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostProcessAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostProcessAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcessAnimator__Class>(type_info(), "", "UberPostProcessAnimator");
        }
        inline app::UberPostProcessAnimator* create() {
            return il2cpp::create_object<app::UberPostProcessAnimator>(get_class());
        }
    } // namespace UberPostProcessAnimator
} // namespace app::classes::types
