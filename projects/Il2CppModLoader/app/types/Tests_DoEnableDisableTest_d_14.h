#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_DoEnableDisableTest_d_14 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_DoEnableDisableTest_d_14__Class** type_info;
        inline app::Tests_DoEnableDisableTest_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoEnableDisableTest_d_14__Class>(type_info, "HierarchyPerfTest", "Tests", "<DoEnableDisableTest>d__14");
        }
        inline app::Tests_DoEnableDisableTest_d_14* create() {
            return il2cpp::create_object<app::Tests_DoEnableDisableTest_d_14>(get_class());
        }
    } // namespace Tests_DoEnableDisableTest_d_14
} // namespace app::classes::types
