#pragma once
#include <Modloader/app/structs/PetrifiedOwlLookStateAnimator.h>
#include <Modloader/app/structs/PetrifiedOwlLookStateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLookStateAnimator {
        inline app::PetrifiedOwlLookStateAnimator__Class** type_info() {
            static app::PetrifiedOwlLookStateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlLookStateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlLookStateAnimator__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLookStateAnimator__Class>(type_info(), "Moon", "PetrifiedOwlLookStateAnimator");
        }
        inline app::PetrifiedOwlLookStateAnimator* create() {
            return il2cpp::create_object<app::PetrifiedOwlLookStateAnimator>(get_class());
        }
    } // namespace PetrifiedOwlLookStateAnimator
} // namespace app::classes::types
