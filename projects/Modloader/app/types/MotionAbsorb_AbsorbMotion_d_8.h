#pragma once
#include <Modloader/app/structs/MotionAbsorb_AbsorbMotion_d_8.h>
#include <Modloader/app/structs/MotionAbsorb_AbsorbMotion_d_8__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorb_AbsorbMotion_d_8 {
        inline app::MotionAbsorb_AbsorbMotion_d_8__Class** type_info() {
            static app::MotionAbsorb_AbsorbMotion_d_8__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MotionAbsorb_AbsorbMotion_d_8__Class**)(modloader::win::memory::resolve_rva(0x047494C8));
            }
            return cache;
        }
        inline app::MotionAbsorb_AbsorbMotion_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::MotionAbsorb_AbsorbMotion_d_8__Class>(type_info(), "RootMotion.Demos", "MotionAbsorb", "<AbsorbMotion>d__8");
        }
        inline app::MotionAbsorb_AbsorbMotion_d_8* create() {
            return il2cpp::create_object<app::MotionAbsorb_AbsorbMotion_d_8>(get_class());
        }
    } // namespace MotionAbsorb_AbsorbMotion_d_8
} // namespace app::classes::types
