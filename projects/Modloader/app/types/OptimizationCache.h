#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OptimizationCache__Class.h>
#include <Modloader/app/structs/OptimizationCache.h>

namespace app::classes::types {
    namespace OptimizationCache {
        inline app::OptimizationCache__Class** type_info = (app::OptimizationCache__Class**)(modloader::win::memory::resolve_rva(0x04705258));
        inline app::OptimizationCache__Class* get_class() {
            return il2cpp::get_class<app::OptimizationCache__Class>(type_info, "Moon.ArtOptimization", "OptimizationCache");
        }
        inline app::OptimizationCache* create() {
            return il2cpp::create_object<app::OptimizationCache>(get_class());
        }
    } // namespace OptimizationCache
} // namespace app::classes::types
