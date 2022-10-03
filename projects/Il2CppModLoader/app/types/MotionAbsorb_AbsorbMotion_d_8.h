#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MotionAbsorb_AbsorbMotion_d_8 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MotionAbsorb_AbsorbMotion_d_8__Class** type_info;
        inline app::MotionAbsorb_AbsorbMotion_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::MotionAbsorb_AbsorbMotion_d_8__Class>(type_info, "RootMotion.Demos", "MotionAbsorb", "<AbsorbMotion>d__8");
        }
        inline app::MotionAbsorb_AbsorbMotion_d_8* create() {
            return il2cpp::create_object<app::MotionAbsorb_AbsorbMotion_d_8>(get_class());
        }
    } // namespace MotionAbsorb_AbsorbMotion_d_8
} // namespace app::classes::types
