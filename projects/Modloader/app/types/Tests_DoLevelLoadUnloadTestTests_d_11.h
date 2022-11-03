#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests_DoLevelLoadUnloadTestTests_d_11 {
        inline app::Tests_DoLevelLoadUnloadTestTests_d_11__Class** type_info = (app::Tests_DoLevelLoadUnloadTestTests_d_11__Class**)(modloader::win::memory::resolve_rva(0x0478B5E0));
        inline app::Tests_DoLevelLoadUnloadTestTests_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoLevelLoadUnloadTestTests_d_11__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoLevelLoadUnloadTestTests>d__11");
        }
        inline app::Tests_DoLevelLoadUnloadTestTests_d_11* create() {
            return il2cpp::create_object<app::Tests_DoLevelLoadUnloadTestTests_d_11>(get_class());
        }
    } // namespace Tests_DoLevelLoadUnloadTestTests_d_11
} // namespace app::classes::types
