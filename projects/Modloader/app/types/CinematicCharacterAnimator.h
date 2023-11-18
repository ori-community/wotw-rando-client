#pragma once
#include <Modloader/app/structs/CinematicCharacterAnimator.h>
#include <Modloader/app/structs/CinematicCharacterAnimator__Array.h>
#include <Modloader/app/structs/CinematicCharacterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator {
        inline app::CinematicCharacterAnimator__Class** type_info() {
            static app::CinematicCharacterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CinematicCharacterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CinematicCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::CinematicCharacterAnimator__Class>(type_info(), "Moon.Timeline", "CinematicCharacterAnimator");
        }
        inline app::CinematicCharacterAnimator* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator>(get_class());
        }
        inline app::CinematicCharacterAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::CinematicCharacterAnimator__Array>(get_class(), size);
        }
        inline app::CinematicCharacterAnimator__Array* create_array(const std::vector<app::CinematicCharacterAnimator*>& items) {
            return il2cpp::array_new<app::CinematicCharacterAnimator__Array>(get_class(), items);
        }
    } // namespace CinematicCharacterAnimator
} // namespace app::classes::types
