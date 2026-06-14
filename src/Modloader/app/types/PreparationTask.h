#pragma once
#include <Modloader/app/structs/PreparationTask.h>
#include <Modloader/app/structs/PreparationTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreparationTask {
        inline app::PreparationTask__Class** type_info() {
            static app::PreparationTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PreparationTask__Class**)(modloader::win::memory::resolve_rva(0x047222F8));
            }
            return cache;
        }
        inline app::PreparationTask__Class* get_class() {
            return il2cpp::get_class<app::PreparationTask__Class>(type_info(), "Moon.HierarchyPerformanceTest", "PreparationTask");
        }
        inline app::PreparationTask* create() {
            return il2cpp::create_object<app::PreparationTask>(get_class());
        }
    } // namespace PreparationTask
} // namespace app::classes::types
