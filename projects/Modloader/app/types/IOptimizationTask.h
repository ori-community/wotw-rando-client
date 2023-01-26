#pragma once
#include <Modloader/app/structs/IOptimizationTask.h>
#include <Modloader/app/structs/IOptimizationTask__Array.h>
#include <Modloader/app/structs/IOptimizationTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOptimizationTask {
        inline app::IOptimizationTask__Class** type_info() {
            static app::IOptimizationTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IOptimizationTask__Class**)(modloader::win::memory::resolve_rva(0x04765ED8));
            }
            return cache;
        }
        inline app::IOptimizationTask__Class* get_class() {
            return il2cpp::get_class<app::IOptimizationTask__Class>(type_info(), "Moon.ArtOptimization", "IOptimizationTask");
        }
        inline app::IOptimizationTask__Array* create_array(int size) {
            return il2cpp::array_new<app::IOptimizationTask__Array>(get_class(), size);
        }
        inline app::IOptimizationTask__Array* create_array(const std::vector<app::IOptimizationTask*>& items) {
            return il2cpp::array_new<app::IOptimizationTask__Array>(get_class(), items);
        }
    } // namespace IOptimizationTask
} // namespace app::classes::types
