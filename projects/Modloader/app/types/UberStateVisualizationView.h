#pragma once
#include <Modloader/app/structs/UberStateVisualizationView.h>
#include <Modloader/app/structs/UberStateVisualizationView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateVisualizationView {
        inline app::UberStateVisualizationView__Class** type_info() {
            static app::UberStateVisualizationView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x0471C9A8));
            }
            return cache;
        }
        inline app::UberStateVisualizationView__Class* get_class() {
            return il2cpp::get_class<app::UberStateVisualizationView__Class>(type_info(), "Moon.UberStateVisualization", "UberStateVisualizationView");
        }
        inline app::UberStateVisualizationView* create() {
            return il2cpp::create_object<app::UberStateVisualizationView>(get_class());
        }
    } // namespace UberStateVisualizationView
} // namespace app::classes::types
