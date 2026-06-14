#pragma once
#include <Modloader/app/structs/TimelineBranchingControllerTest.h>
#include <Modloader/app/structs/TimelineBranchingControllerTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineBranchingControllerTest {
        inline app::TimelineBranchingControllerTest__Class** type_info() {
            static app::TimelineBranchingControllerTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineBranchingControllerTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineBranchingControllerTest__Class* get_class() {
            return il2cpp::get_class<app::TimelineBranchingControllerTest__Class>(type_info(), "", "TimelineBranchingControllerTest");
        }
        inline app::TimelineBranchingControllerTest* create() {
            return il2cpp::create_object<app::TimelineBranchingControllerTest>(get_class());
        }
    } // namespace TimelineBranchingControllerTest
} // namespace app::classes::types
