#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreparationTask {
        inline app::PreparationTask__Class** type_info = (app::PreparationTask__Class**)(modloader::win::memory::resolve_rva(0x047222F8));
        inline app::PreparationTask__Class* get_class() {
            return il2cpp::get_class<app::PreparationTask__Class>(type_info, "Moon.HierarchyPerformanceTest", "PreparationTask");
        }
        inline app::PreparationTask* create() {
            return il2cpp::create_object<app::PreparationTask>(get_class());
        }
    } // namespace PreparationTask
} // namespace app::classes::types
