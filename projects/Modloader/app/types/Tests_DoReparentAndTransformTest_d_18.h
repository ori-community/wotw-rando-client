#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests_DoReparentAndTransformTest_d_18 {
        inline app::Tests_DoReparentAndTransformTest_d_18__Class** type_info = (app::Tests_DoReparentAndTransformTest_d_18__Class**)(modloader::win::memory::resolve_rva(0x047266D8));
        inline app::Tests_DoReparentAndTransformTest_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoReparentAndTransformTest_d_18__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoReparentAndTransformTest>d__18");
        }
        inline app::Tests_DoReparentAndTransformTest_d_18* create() {
            return il2cpp::create_object<app::Tests_DoReparentAndTransformTest_d_18>(get_class());
        }
    } // namespace Tests_DoReparentAndTransformTest_d_18
} // namespace app::classes::types
