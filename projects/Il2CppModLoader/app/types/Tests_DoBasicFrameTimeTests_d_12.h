#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_DoBasicFrameTimeTests_d_12 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_DoBasicFrameTimeTests_d_12__Class** type_info;
        inline app::Tests_DoBasicFrameTimeTests_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoBasicFrameTimeTests_d_12__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoBasicFrameTimeTests>d__12");
        }
        inline app::Tests_DoBasicFrameTimeTests_d_12* create() {
            return il2cpp::create_object<app::Tests_DoBasicFrameTimeTests_d_12>(get_class());
        }
    } // namespace Tests_DoBasicFrameTimeTests_d_12
} // namespace app::classes::types
