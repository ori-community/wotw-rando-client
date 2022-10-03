#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerfTestTimer_TestData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerfTestTimer_TestData__Class** type_info;
        inline app::PerfTestTimer_TestData__Class* get_class() {
            return il2cpp::get_nested_class<app::PerfTestTimer_TestData__Class>(type_info, "HierarchyPerfTest", "PerfTestTimer", "TestData");
        }
        inline app::PerfTestTimer_TestData* create() {
            return il2cpp::create_object<app::PerfTestTimer_TestData>(get_class());
        }
        inline app::PerfTestTimer_TestData__Array* create_array(int size) {
            return il2cpp::array_new<app::PerfTestTimer_TestData__Array>(get_class(), size);
        }
    } // namespace PerfTestTimer_TestData
} // namespace app::classes::types
