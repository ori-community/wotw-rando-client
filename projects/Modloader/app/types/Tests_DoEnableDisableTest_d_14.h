#pragma once
#include <Modloader/app/structs/Tests_DoEnableDisableTest_d_14.h>
#include <Modloader/app/structs/Tests_DoEnableDisableTest_d_14__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tests_DoEnableDisableTest_d_14 {
        inline app::Tests_DoEnableDisableTest_d_14__Class** type_info() {
            static app::Tests_DoEnableDisableTest_d_14__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tests_DoEnableDisableTest_d_14__Class**)(modloader::win::memory::resolve_rva(0x0477A508));
            }
            return cache;
        }
        inline app::Tests_DoEnableDisableTest_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoEnableDisableTest_d_14__Class>(type_info(), "HierarchyPerfTest", "Tests", "<DoEnableDisableTest>d__14");
        }
        inline app::Tests_DoEnableDisableTest_d_14* create() {
            return il2cpp::create_object<app::Tests_DoEnableDisableTest_d_14>(get_class());
        }
    } // namespace Tests_DoEnableDisableTest_d_14
} // namespace app::classes::types
