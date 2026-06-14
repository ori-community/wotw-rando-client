#pragma once
#include <Modloader/app/structs/MotionAbsorb_Absorber__Array.h>
#include <Modloader/app/structs/MotionAbsorb_Absorber__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorb_Absorber__Array {
        inline app::MotionAbsorb_Absorber__Array__Class** type_info() {
            static app::MotionAbsorb_Absorber__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionAbsorb_Absorber__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionAbsorb_Absorber__Array__Class* get_class() {
            return il2cpp::get_class<app::MotionAbsorb_Absorber__Array__Class>(type_info(), "RootMotion.Demos", "MotionAbsorb+Absorber[]");
        }
        inline app::MotionAbsorb_Absorber__Array* create() {
            return il2cpp::create_object<app::MotionAbsorb_Absorber__Array>(get_class());
        }
    } // namespace MotionAbsorb_Absorber__Array
} // namespace app::classes::types
