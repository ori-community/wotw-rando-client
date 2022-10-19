#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateVisualizationView {
        inline app::UberStateVisualizationView__Class** type_info = (app::UberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x0471C9A8));
        inline app::UberStateVisualizationView__Class* get_class() {
            return il2cpp::get_class<app::UberStateVisualizationView__Class>(type_info, "Moon.UberStateVisualization", "UberStateVisualizationView");
        }
        inline app::UberStateVisualizationView* create() {
            return il2cpp::create_object<app::UberStateVisualizationView>(get_class());
        }
    } // namespace UberStateVisualizationView
} // namespace app::classes::types
