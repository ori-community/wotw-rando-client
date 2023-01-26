#pragma once
#include <Modloader/app/structs/PetrifiedOwlRootMotionTest.h>
#include <Modloader/app/structs/PetrifiedOwlRootMotionTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlRootMotionTest {
        inline app::PetrifiedOwlRootMotionTest__Class** type_info() {
            static app::PetrifiedOwlRootMotionTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlRootMotionTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlRootMotionTest__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlRootMotionTest__Class>(type_info(), "", "PetrifiedOwlRootMotionTest");
        }
        inline app::PetrifiedOwlRootMotionTest* create() {
            return il2cpp::create_object<app::PetrifiedOwlRootMotionTest>(get_class());
        }
    } // namespace PetrifiedOwlRootMotionTest
} // namespace app::classes::types
