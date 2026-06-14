#pragma once
#include <Modloader/app/structs/CinematicEntityAnimator.h>
#include <Modloader/app/structs/CinematicEntityAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CinematicEntityAnimator {
        inline app::CinematicEntityAnimator__Class** type_info() {
            static app::CinematicEntityAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CinematicEntityAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CinematicEntityAnimator__Class* get_class() {
            return il2cpp::get_class<app::CinematicEntityAnimator__Class>(type_info(), "", "CinematicEntityAnimator");
        }
        inline app::CinematicEntityAnimator* create() {
            return il2cpp::create_object<app::CinematicEntityAnimator>(get_class());
        }
    } // namespace CinematicEntityAnimator
} // namespace app::classes::types
