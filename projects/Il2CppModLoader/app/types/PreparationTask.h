#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreparationTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PreparationTask__Class** type_info;
        inline app::PreparationTask__Class* get_class() {
            return il2cpp::get_class<app::PreparationTask__Class>(type_info, "Moon.HierarchyPerformanceTest", "PreparationTask");
        }
        inline app::PreparationTask* create() {
            return il2cpp::create_object<app::PreparationTask>(get_class());
        }
    } // namespace PreparationTask
} // namespace app::classes::types
