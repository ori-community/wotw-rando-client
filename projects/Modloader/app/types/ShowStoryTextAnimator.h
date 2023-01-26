#pragma once
#include <Modloader/app/structs/ShowStoryTextAnimator.h>
#include <Modloader/app/structs/ShowStoryTextAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowStoryTextAnimator {
        inline app::ShowStoryTextAnimator__Class** type_info() {
            static app::ShowStoryTextAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowStoryTextAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowStoryTextAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShowStoryTextAnimator__Class>(type_info(), "", "ShowStoryTextAnimator");
        }
        inline app::ShowStoryTextAnimator* create() {
            return il2cpp::create_object<app::ShowStoryTextAnimator>(get_class());
        }
    } // namespace ShowStoryTextAnimator
} // namespace app::classes::types
