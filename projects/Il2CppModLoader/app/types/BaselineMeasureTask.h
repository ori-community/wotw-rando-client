#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaselineMeasureTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaselineMeasureTask__Class** type_info;
        inline app::BaselineMeasureTask__Class* get_class() {
            return il2cpp::get_class<app::BaselineMeasureTask__Class>(type_info, "Moon.HierarchyPerformanceTest", "BaselineMeasureTask");
        }
        inline app::BaselineMeasureTask* create() {
            return il2cpp::create_object<app::BaselineMeasureTask>(get_class());
        }
    } // namespace BaselineMeasureTask
} // namespace app::classes::types
