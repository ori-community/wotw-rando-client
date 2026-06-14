#pragma once
#include <Modloader/app/structs/BaselineMeasureTask.h>
#include <Modloader/app/structs/BaselineMeasureTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaselineMeasureTask {
        inline app::BaselineMeasureTask__Class** type_info() {
            static app::BaselineMeasureTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaselineMeasureTask__Class**)(modloader::win::memory::resolve_rva(0x0471F188));
            }
            return cache;
        }
        inline app::BaselineMeasureTask__Class* get_class() {
            return il2cpp::get_class<app::BaselineMeasureTask__Class>(type_info(), "Moon.HierarchyPerformanceTest", "BaselineMeasureTask");
        }
        inline app::BaselineMeasureTask* create() {
            return il2cpp::create_object<app::BaselineMeasureTask>(get_class());
        }
    } // namespace BaselineMeasureTask
} // namespace app::classes::types
