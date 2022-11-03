#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests_WaitForNSeconds_d_19 {
        inline app::Tests_WaitForNSeconds_d_19__Class** type_info = (app::Tests_WaitForNSeconds_d_19__Class**)(modloader::win::memory::resolve_rva(0x04710438));
        inline app::Tests_WaitForNSeconds_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_WaitForNSeconds_d_19__Class>(type_info, "HierarchyPerfTest", "Tests", "<WaitForNSeconds>d__19");
        }
        inline app::Tests_WaitForNSeconds_d_19* create() {
            return il2cpp::create_object<app::Tests_WaitForNSeconds_d_19>(get_class());
        }
    } // namespace Tests_WaitForNSeconds_d_19
} // namespace app::classes::types
