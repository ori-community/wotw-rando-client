#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateVisualizationView_UberStateVisualizationModel {
        namespace {
            inline app::UberStateVisualizationView_UberStateVisualizationModel__Class* type_info_ref = nullptr;
        }
        inline app::UberStateVisualizationView_UberStateVisualizationModel__Class** type_info = &type_info_ref;
        inline app::UberStateVisualizationView_UberStateVisualizationModel__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateVisualizationView_UberStateVisualizationModel__Class>(type_info, "Moon.UberStateVisualization", "UberStateVisualizationView", "UberStateVisualizationModel");
        }
        inline app::UberStateVisualizationView_UberStateVisualizationModel* create() {
            return il2cpp::create_object<app::UberStateVisualizationView_UberStateVisualizationModel>(get_class());
        }
        inline app::UberStateVisualizationView_UberStateVisualizationModel__Boxed* box(app::UberStateVisualizationView_UberStateVisualizationModel value) {
            return il2cpp::box_value<app::UberStateVisualizationView_UberStateVisualizationModel__Boxed>(get_class(), value);
        }
    } // namespace UberStateVisualizationView_UberStateVisualizationModel
} // namespace app::classes::types
