#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlRootMotionTest_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlRootMotionTest_c__Class** type_info;
        inline app::PetrifiedOwlRootMotionTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlRootMotionTest_c__Class>(type_info, "", "PetrifiedOwlRootMotionTest", "<>c");
        }
        inline app::PetrifiedOwlRootMotionTest_c* create() {
            return il2cpp::create_object<app::PetrifiedOwlRootMotionTest_c>(get_class());
        }
    } // namespace PetrifiedOwlRootMotionTest_c
} // namespace app::classes::types
