#pragma once
#include <Modloader/app/structs/CinematicEntityAnimator_TargetModes__Enum.h>
#include <Modloader/app/structs/CinematicEntityAnimator_TargetModes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CinematicEntityAnimator_TargetModes__Enum {
        inline app::CinematicEntityAnimator_TargetModes__Enum__Class** type_info() {
            static app::CinematicEntityAnimator_TargetModes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CinematicEntityAnimator_TargetModes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CinematicEntityAnimator_TargetModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicEntityAnimator_TargetModes__Enum__Class>(type_info(), "", "CinematicEntityAnimator", "TargetModes");
        }
        inline app::CinematicEntityAnimator_TargetModes__Enum* create() {
            return il2cpp::create_object<app::CinematicEntityAnimator_TargetModes__Enum>(get_class());
        }
    } // namespace CinematicEntityAnimator_TargetModes__Enum
} // namespace app::classes::types
