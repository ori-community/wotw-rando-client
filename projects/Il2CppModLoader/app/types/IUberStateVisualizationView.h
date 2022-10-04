#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateVisualizationView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateVisualizationView__Class** type_info;
        inline app::IUberStateVisualizationView__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizationView__Class>(type_info, "Moon.UberStateVisualization", "IUberStateVisualizationView");
        }
        inline app::IUberStateVisualizationView* create() {
            return il2cpp::create_object<app::IUberStateVisualizationView>(get_class());
        }
    } // namespace IUberStateVisualizationView
} // namespace app::classes::types
