#pragma once
#include <Modloader/app/structs/MeasureTask.h>
#include <Modloader/app/structs/MeasureTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeasureTask {
        inline app::MeasureTask__Class** type_info() {
            static app::MeasureTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeasureTask__Class**)(modloader::win::memory::resolve_rva(0x0472D2F8));
            }
            return cache;
        }
        inline app::MeasureTask__Class* get_class() {
            return il2cpp::get_class<app::MeasureTask__Class>(type_info(), "Moon.HierarchyPerformanceTest", "MeasureTask");
        }
        inline app::MeasureTask* create() {
            return il2cpp::create_object<app::MeasureTask>(get_class());
        }
    } // namespace MeasureTask
} // namespace app::classes::types
