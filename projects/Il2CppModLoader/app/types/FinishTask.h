#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FinishTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FinishTask__Class** type_info;
        inline app::FinishTask__Class* get_class() {
            return il2cpp::get_class<app::FinishTask__Class>(type_info, "Moon.HierarchyPerformanceTest", "FinishTask");
        }
        inline app::FinishTask* create() {
            return il2cpp::create_object<app::FinishTask>(get_class());
        }
    } // namespace FinishTask
} // namespace app::classes::types
