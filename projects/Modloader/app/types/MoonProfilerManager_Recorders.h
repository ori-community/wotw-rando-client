#pragma once
#include <Modloader/app/structs/MoonProfilerManager_Recorders.h>
#include <Modloader/app/structs/MoonProfilerManager_Recorders__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonProfilerManager_Recorders {
        inline app::MoonProfilerManager_Recorders__Class** type_info() {
            static app::MoonProfilerManager_Recorders__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonProfilerManager_Recorders__Class**)(modloader::win::memory::resolve_rva(0x0477AD60));
            }
            return cache;
        }
        inline app::MoonProfilerManager_Recorders__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonProfilerManager_Recorders__Class>(type_info(), "Moon", "MoonProfilerManager", "Recorders");
        }
        inline app::MoonProfilerManager_Recorders* create() {
            return il2cpp::create_object<app::MoonProfilerManager_Recorders>(get_class());
        }
    } // namespace MoonProfilerManager_Recorders
} // namespace app::classes::types
