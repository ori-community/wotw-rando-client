#pragma once
#include <Modloader/app/structs/FaderAnimator.h>
#include <Modloader/app/structs/FaderAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderAnimator {
        inline app::FaderAnimator__Class** type_info() {
            static app::FaderAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaderAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaderAnimator__Class* get_class() {
            return il2cpp::get_class<app::FaderAnimator__Class>(type_info(), "", "FaderAnimator");
        }
        inline app::FaderAnimator* create() {
            return il2cpp::create_object<app::FaderAnimator>(get_class());
        }
    } // namespace FaderAnimator
} // namespace app::classes::types
