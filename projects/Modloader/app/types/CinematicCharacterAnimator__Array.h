#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CinematicCharacterAnimator__Array__Class.h>
#include <Modloader/app/structs/CinematicCharacterAnimator__Array.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator__Array {
        namespace {
            inline app::CinematicCharacterAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::CinematicCharacterAnimator__Array__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CinematicCharacterAnimator__Array__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator[]");
        }
        inline app::CinematicCharacterAnimator__Array* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator__Array>(get_class());
        }
    } // namespace CinematicCharacterAnimator__Array
} // namespace app::classes::types
