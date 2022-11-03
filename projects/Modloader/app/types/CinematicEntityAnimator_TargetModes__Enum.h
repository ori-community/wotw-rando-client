#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CinematicEntityAnimator_TargetModes__Enum {
        namespace {
            inline app::CinematicEntityAnimator_TargetModes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CinematicEntityAnimator_TargetModes__Enum__Class** type_info = &type_info_ref;
        inline app::CinematicEntityAnimator_TargetModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicEntityAnimator_TargetModes__Enum__Class>(type_info, "", "CinematicEntityAnimator", "TargetModes");
        }
        inline app::CinematicEntityAnimator_TargetModes__Enum* create() {
            return il2cpp::create_object<app::CinematicEntityAnimator_TargetModes__Enum>(get_class());
        }
    } // namespace CinematicEntityAnimator_TargetModes__Enum
} // namespace app::classes::types
