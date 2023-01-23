#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlRootMotionTest__Class.h>
#include <Modloader/app/structs/PetrifiedOwlRootMotionTest.h>

namespace app::classes::types {
    namespace PetrifiedOwlRootMotionTest {
        namespace {
            inline app::PetrifiedOwlRootMotionTest__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlRootMotionTest__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlRootMotionTest__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlRootMotionTest__Class>(type_info, "", "PetrifiedOwlRootMotionTest");
        }
        inline app::PetrifiedOwlRootMotionTest* create() {
            return il2cpp::create_object<app::PetrifiedOwlRootMotionTest>(get_class());
        }
    } // namespace PetrifiedOwlRootMotionTest
} // namespace app::classes::types
