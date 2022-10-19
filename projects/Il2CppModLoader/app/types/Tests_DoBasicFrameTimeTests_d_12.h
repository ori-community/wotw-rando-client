#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests_DoBasicFrameTimeTests_d_12 {
        inline app::Tests_DoBasicFrameTimeTests_d_12__Class** type_info = (app::Tests_DoBasicFrameTimeTests_d_12__Class**)(modloader::win::memory::resolve_rva(0x04765080));
        inline app::Tests_DoBasicFrameTimeTests_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoBasicFrameTimeTests_d_12__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoBasicFrameTimeTests>d__12");
        }
        inline app::Tests_DoBasicFrameTimeTests_d_12* create() {
            return il2cpp::create_object<app::Tests_DoBasicFrameTimeTests_d_12>(get_class());
        }
    } // namespace Tests_DoBasicFrameTimeTests_d_12
} // namespace app::classes::types
