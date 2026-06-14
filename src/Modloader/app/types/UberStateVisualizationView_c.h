#pragma once
#include <Modloader/app/structs/UberStateVisualizationView_c.h>
#include <Modloader/app/structs/UberStateVisualizationView_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateVisualizationView_c {
        inline app::UberStateVisualizationView_c__Class** type_info() {
            static app::UberStateVisualizationView_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateVisualizationView_c__Class**)(modloader::win::memory::resolve_rva(0x0474A820));
            }
            return cache;
        }
        inline app::UberStateVisualizationView_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateVisualizationView_c__Class>(type_info(), "Moon.UberStateVisualization", "UberStateVisualizationView", "<>c");
        }
        inline app::UberStateVisualizationView_c* create() {
            return il2cpp::create_object<app::UberStateVisualizationView_c>(get_class());
        }
    } // namespace UberStateVisualizationView_c
} // namespace app::classes::types
