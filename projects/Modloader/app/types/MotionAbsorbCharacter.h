#pragma once
#include <Modloader/app/structs/MotionAbsorbCharacter.h>
#include <Modloader/app/structs/MotionAbsorbCharacter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorbCharacter {
        inline app::MotionAbsorbCharacter__Class** type_info() {
            static app::MotionAbsorbCharacter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionAbsorbCharacter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionAbsorbCharacter__Class* get_class() {
            return il2cpp::get_class<app::MotionAbsorbCharacter__Class>(type_info(), "RootMotion.Demos", "MotionAbsorbCharacter");
        }
        inline app::MotionAbsorbCharacter* create() {
            return il2cpp::create_object<app::MotionAbsorbCharacter>(get_class());
        }
    } // namespace MotionAbsorbCharacter
} // namespace app::classes::types
