#pragma once
#include <Modloader/app/structs/PauseAnimator.h>
#include <Modloader/app/structs/PauseAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseAnimator {
        inline app::PauseAnimator__Class** type_info() {
            static app::PauseAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseAnimator__Class* get_class() {
            return il2cpp::get_class<app::PauseAnimator__Class>(type_info(), "Moon.Timeline", "PauseAnimator");
        }
        inline app::PauseAnimator* create() {
            return il2cpp::create_object<app::PauseAnimator>(get_class());
        }
    } // namespace PauseAnimator
} // namespace app::classes::types
