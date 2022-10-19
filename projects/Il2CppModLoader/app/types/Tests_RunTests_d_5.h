#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests_RunTests_d_5 {
        inline app::Tests_RunTests_d_5__Class** type_info = (app::Tests_RunTests_d_5__Class**)(modloader::win::memory::resolve_rva(0x04765D00));
        inline app::Tests_RunTests_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_RunTests_d_5__Class>(type_info, "HierarchyPerfTest", "Tests", "<RunTests>d__5");
        }
        inline app::Tests_RunTests_d_5* create() {
            return il2cpp::create_object<app::Tests_RunTests_d_5>(get_class());
        }
    } // namespace Tests_RunTests_d_5
} // namespace app::classes::types
