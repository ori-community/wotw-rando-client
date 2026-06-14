#pragma once
#include <Modloader/app/structs/UberStateVisualizationMenu.h>
#include <Modloader/app/structs/UberStateVisualizationMenu__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateVisualizationMenu {
        inline app::UberStateVisualizationMenu__Class** type_info() {
            static app::UberStateVisualizationMenu__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateVisualizationMenu__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateVisualizationMenu__Class* get_class() {
            return il2cpp::get_class<app::UberStateVisualizationMenu__Class>(type_info(), "Moon.UberStateVisualization", "UberStateVisualizationMenu");
        }
        inline app::UberStateVisualizationMenu* create() {
            return il2cpp::create_object<app::UberStateVisualizationMenu>(get_class());
        }
    } // namespace UberStateVisualizationMenu
} // namespace app::classes::types
