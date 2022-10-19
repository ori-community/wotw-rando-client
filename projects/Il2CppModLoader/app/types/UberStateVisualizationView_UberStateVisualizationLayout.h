#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateVisualizationView_UberStateVisualizationLayout {
        namespace {
            inline app::UberStateVisualizationView_UberStateVisualizationLayout__Class* type_info_ref = nullptr;
        }
        inline app::UberStateVisualizationView_UberStateVisualizationLayout__Class** type_info = &type_info_ref;
        inline app::UberStateVisualizationView_UberStateVisualizationLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateVisualizationView_UberStateVisualizationLayout__Class>(type_info, "Moon.UberStateVisualization", "UberStateVisualizationView", "UberStateVisualizationLayout");
        }
        inline app::UberStateVisualizationView_UberStateVisualizationLayout* create() {
            return il2cpp::create_object<app::UberStateVisualizationView_UberStateVisualizationLayout>(get_class());
        }
        inline app::UberStateVisualizationView_UberStateVisualizationLayout__Boxed* box(app::UberStateVisualizationView_UberStateVisualizationLayout value) {
            return il2cpp::box_value<app::UberStateVisualizationView_UberStateVisualizationLayout__Boxed>(get_class(), value);
        }
    } // namespace UberStateVisualizationView_UberStateVisualizationLayout
} // namespace app::classes::types
