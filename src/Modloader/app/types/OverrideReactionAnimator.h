#pragma once
#include <Modloader/app/structs/OverrideReactionAnimator.h>
#include <Modloader/app/structs/OverrideReactionAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverrideReactionAnimator {
        inline app::OverrideReactionAnimator__Class** type_info() {
            static app::OverrideReactionAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OverrideReactionAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OverrideReactionAnimator__Class* get_class() {
            return il2cpp::get_class<app::OverrideReactionAnimator__Class>(type_info(), "Moon.Timeline", "OverrideReactionAnimator");
        }
        inline app::OverrideReactionAnimator* create() {
            return il2cpp::create_object<app::OverrideReactionAnimator>(get_class());
        }
    } // namespace OverrideReactionAnimator
} // namespace app::classes::types
