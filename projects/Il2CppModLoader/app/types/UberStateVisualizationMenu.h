#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateVisualizationMenu {
        namespace {
            inline app::UberStateVisualizationMenu__Class* type_info_ref = nullptr;
        }
        inline app::UberStateVisualizationMenu__Class** type_info = &type_info_ref;
        inline app::UberStateVisualizationMenu__Class* get_class() {
            return il2cpp::get_class<app::UberStateVisualizationMenu__Class>(type_info, "Moon.UberStateVisualization", "UberStateVisualizationMenu");
        }
        inline app::UberStateVisualizationMenu* create() {
            return il2cpp::create_object<app::UberStateVisualizationMenu>(get_class());
        }
    } // namespace UberStateVisualizationMenu
} // namespace app::classes::types
