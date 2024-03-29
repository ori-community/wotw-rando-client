#pragma once
#include <Modloader/app/structs/Tests_DoReparentTest_d_17.h>
#include <Modloader/app/structs/Tests_DoReparentTest_d_17__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tests_DoReparentTest_d_17 {
        inline app::Tests_DoReparentTest_d_17__Class** type_info() {
            static app::Tests_DoReparentTest_d_17__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tests_DoReparentTest_d_17__Class**)(modloader::win::memory::resolve_rva(0x04703538));
            }
            return cache;
        }
        inline app::Tests_DoReparentTest_d_17__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoReparentTest_d_17__Class>(type_info(), "HierarchyPerfTest", "Tests", "<DoReparentTest>d__17");
        }
        inline app::Tests_DoReparentTest_d_17* create() {
            return il2cpp::create_object<app::Tests_DoReparentTest_d_17>(get_class());
        }
    } // namespace Tests_DoReparentTest_d_17
} // namespace app::classes::types
