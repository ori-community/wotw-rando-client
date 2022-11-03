#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonProfilerManager {
        inline app::MoonProfilerManager__Class** type_info = (app::MoonProfilerManager__Class**)(modloader::win::memory::resolve_rva(0x047376F8));
        inline app::MoonProfilerManager__Class* get_class() {
            return il2cpp::get_class<app::MoonProfilerManager__Class>(type_info, "Moon", "MoonProfilerManager");
        }
        inline app::MoonProfilerManager* create() {
            return il2cpp::create_object<app::MoonProfilerManager>(get_class());
        }
    } // namespace MoonProfilerManager
} // namespace app::classes::types
