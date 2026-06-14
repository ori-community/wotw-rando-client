#pragma once
#include <Modloader/app/structs/IUberStateVisualizationView.h>
#include <Modloader/app/structs/IUberStateVisualizationView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateVisualizationView {
        inline app::IUberStateVisualizationView__Class** type_info() {
            static app::IUberStateVisualizationView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateVisualizationView__Class**)(modloader::win::memory::resolve_rva(0x04761530));
            }
            return cache;
        }
        inline app::IUberStateVisualizationView__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizationView__Class>(type_info(), "Moon.UberStateVisualization", "IUberStateVisualizationView");
        }
    } // namespace IUberStateVisualizationView
} // namespace app::classes::types
