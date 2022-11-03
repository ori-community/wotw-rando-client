#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator {
        namespace {
            inline app::CinematicCharacterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CinematicCharacterAnimator__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::CinematicCharacterAnimator__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator");
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
