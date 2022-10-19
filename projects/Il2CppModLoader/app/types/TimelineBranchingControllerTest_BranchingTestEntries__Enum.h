#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineBranchingControllerTest_BranchingTestEntries__Enum {
        inline app::TimelineBranchingControllerTest_BranchingTestEntries__Enum__Class** type_info = (app::TimelineBranchingControllerTest_BranchingTestEntries__Enum__Class**)(modloader::win::memory::resolve_rva(0x04736350));
        inline app::TimelineBranchingControllerTest_BranchingTestEntries__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineBranchingControllerTest_BranchingTestEntries__Enum__Class>(type_info, "", "TimelineBranchingControllerTest", "BranchingTestEntries");
        }
        inline app::TimelineBranchingControllerTest_BranchingTestEntries__Enum* create() {
            return il2cpp::create_object<app::TimelineBranchingControllerTest_BranchingTestEntries__Enum>(get_class());
        }
    } // namespace TimelineBranchingControllerTest_BranchingTestEntries__Enum
} // namespace app::classes::types
