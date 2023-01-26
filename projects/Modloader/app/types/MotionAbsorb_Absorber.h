#pragma once
#include <Modloader/app/structs/MotionAbsorb_Absorber.h>
#include <Modloader/app/structs/MotionAbsorb_Absorber__Array.h>
#include <Modloader/app/structs/MotionAbsorb_Absorber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorb_Absorber {
        inline app::MotionAbsorb_Absorber__Class** type_info() {
            static app::MotionAbsorb_Absorber__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionAbsorb_Absorber__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionAbsorb_Absorber__Class* get_class() {
            return il2cpp::get_nested_class<app::MotionAbsorb_Absorber__Class>(type_info(), "RootMotion.Demos", "MotionAbsorb", "Absorber");
        }
        inline app::MotionAbsorb_Absorber* create() {
            return il2cpp::create_object<app::MotionAbsorb_Absorber>(get_class());
        }
        inline app::MotionAbsorb_Absorber__Array* create_array(int size) {
            return il2cpp::array_new<app::MotionAbsorb_Absorber__Array>(get_class(), size);
        }
        inline app::MotionAbsorb_Absorber__Array* create_array(const std::vector<app::MotionAbsorb_Absorber*>& items) {
            return il2cpp::array_new<app::MotionAbsorb_Absorber__Array>(get_class(), items);
        }
    } // namespace MotionAbsorb_Absorber
} // namespace app::classes::types
