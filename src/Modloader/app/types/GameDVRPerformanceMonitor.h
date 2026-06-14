#pragma once
#include <Modloader/app/structs/GameDVRPerformanceMonitor.h>
#include <Modloader/app/structs/GameDVRPerformanceMonitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameDVRPerformanceMonitor {
        inline app::GameDVRPerformanceMonitor__Class** type_info() {
            static app::GameDVRPerformanceMonitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameDVRPerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x0475CA98));
            }
            return cache;
        }
        inline app::GameDVRPerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::GameDVRPerformanceMonitor__Class>(type_info(), "", "GameDVRPerformanceMonitor");
        }
        inline app::GameDVRPerformanceMonitor* create() {
            return il2cpp::create_object<app::GameDVRPerformanceMonitor>(get_class());
        }
    } // namespace GameDVRPerformanceMonitor
} // namespace app::classes::types
