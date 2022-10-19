#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateVisualizationView {
        inline app::IUberStateVisualizationView__Class** type_info = (app::IUberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x04761530));
        inline app::IUberStateVisualizationView__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizationView__Class>(type_info, "Moon.UberStateVisualization", "IUberStateVisualizationView");
        }
    } // namespace IUberStateVisualizationView
} // namespace app::classes::types
