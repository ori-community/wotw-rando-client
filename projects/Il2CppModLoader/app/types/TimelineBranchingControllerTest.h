#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineBranchingControllerTest {
        namespace {
            app::TimelineBranchingControllerTest__Class* type_info_ref = nullptr;
        }
        app::TimelineBranchingControllerTest__Class** type_info = &type_info_ref;
        inline app::TimelineBranchingControllerTest__Class* get_class() {
            return il2cpp::get_class<app::TimelineBranchingControllerTest__Class>(type_info, "", "TimelineBranchingControllerTest");
        }
        inline app::TimelineBranchingControllerTest* create() {
            return il2cpp::create_object<app::TimelineBranchingControllerTest>(get_class());
        }
    } // namespace TimelineBranchingControllerTest
} // namespace app::classes::types
