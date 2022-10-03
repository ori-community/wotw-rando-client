#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateVisualizationView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateVisualizationView__Class** type_info;
        inline app::UberStateVisualizationView__Class* get_class() {
            return il2cpp::get_class<app::UberStateVisualizationView__Class>(type_info, "Moon.UberStateVisualization", "UberStateVisualizationView");
        }
        inline app::UberStateVisualizationView* create() {
            return il2cpp::create_object<app::UberStateVisualizationView>(get_class());
        }
    } // namespace UberStateVisualizationView
} // namespace app::classes::types
