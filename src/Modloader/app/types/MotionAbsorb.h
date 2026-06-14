#pragma once
#include <Modloader/app/structs/MotionAbsorb.h>
#include <Modloader/app/structs/MotionAbsorb__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorb {
        inline app::MotionAbsorb__Class** type_info() {
            static app::MotionAbsorb__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionAbsorb__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionAbsorb__Class* get_class() {
            return il2cpp::get_class<app::MotionAbsorb__Class>(type_info(), "RootMotion.Demos", "MotionAbsorb");
        }
        inline app::MotionAbsorb* create() {
            return il2cpp::create_object<app::MotionAbsorb>(get_class());
        }
    } // namespace MotionAbsorb
} // namespace app::classes::types
