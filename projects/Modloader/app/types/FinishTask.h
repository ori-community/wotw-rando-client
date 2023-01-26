#pragma once
#include <Modloader/app/structs/FinishTask.h>
#include <Modloader/app/structs/FinishTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FinishTask {
        inline app::FinishTask__Class** type_info() {
            static app::FinishTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FinishTask__Class**)(modloader::win::memory::resolve_rva(0x04715478));
            }
            return cache;
        }
        inline app::FinishTask__Class* get_class() {
            return il2cpp::get_class<app::FinishTask__Class>(type_info(), "Moon.HierarchyPerformanceTest", "FinishTask");
        }
        inline app::FinishTask* create() {
            return il2cpp::create_object<app::FinishTask>(get_class());
        }
    } // namespace FinishTask
} // namespace app::classes::types
