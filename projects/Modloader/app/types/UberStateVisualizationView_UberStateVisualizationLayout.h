#pragma once
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationLayout.h>
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationLayout__Boxed.h>
#include <Modloader/app/structs/UberStateVisualizationView_UberStateVisualizationLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateVisualizationView_UberStateVisualizationLayout {
        inline app::UberStateVisualizationView_UberStateVisualizationLayout__Class** type_info() {
            static app::UberStateVisualizationView_UberStateVisualizationLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateVisualizationView_UberStateVisualizationLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateVisualizationView_UberStateVisualizationLayout__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateVisualizationView_UberStateVisualizationLayout__Class>(type_info(), "Moon.UberStateVisualization", "UberStateVisualizationView", "UberStateVisualizationLayout");
        }
        inline app::UberStateVisualizationView_UberStateVisualizationLayout* create() {
            return il2cpp::create_object<app::UberStateVisualizationView_UberStateVisualizationLayout>(get_class());
        }
        inline app::UberStateVisualizationView_UberStateVisualizationLayout__Boxed* box(app::UberStateVisualizationView_UberStateVisualizationLayout value) {
            return il2cpp::box_value<app::UberStateVisualizationView_UberStateVisualizationLayout__Boxed>(get_class(), value);
        }
    } // namespace UberStateVisualizationView_UberStateVisualizationLayout
} // namespace app::classes::types
