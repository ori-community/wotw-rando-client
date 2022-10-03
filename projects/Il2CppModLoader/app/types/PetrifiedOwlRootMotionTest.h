#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlRootMotionTest {
        namespace {
            app::PetrifiedOwlRootMotionTest__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlRootMotionTest__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlRootMotionTest__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlRootMotionTest__Class>(type_info, "", "PetrifiedOwlRootMotionTest");
        }
        inline app::PetrifiedOwlRootMotionTest* create() {
            return il2cpp::create_object<app::PetrifiedOwlRootMotionTest>(get_class());
        }
    } // namespace PetrifiedOwlRootMotionTest
} // namespace app::classes::types
