#pragma once
#include <Modloader/app/structs/TentacleAnimator.h>
#include <Modloader/app/structs/TentacleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimator {
        inline app::TentacleAnimator__Class** type_info() {
            static app::TentacleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleAnimator__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimator__Class>(type_info(), "Moon.Timeline", "TentacleAnimator");
        }
        inline app::TentacleAnimator* create() {
            return il2cpp::create_object<app::TentacleAnimator>(get_class());
        }
    } // namespace TentacleAnimator
} // namespace app::classes::types
