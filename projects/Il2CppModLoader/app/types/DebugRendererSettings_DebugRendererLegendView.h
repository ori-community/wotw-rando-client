#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugRendererSettings_DebugRendererLegendView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugRendererSettings_DebugRendererLegendView__Class** type_info;
        inline app::DebugRendererSettings_DebugRendererLegendView__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugRendererSettings_DebugRendererLegendView__Class>(type_info, "", "DebugRendererSettings", "DebugRendererLegendView");
        }
        inline app::DebugRendererSettings_DebugRendererLegendView* create() {
            return il2cpp::create_object<app::DebugRendererSettings_DebugRendererLegendView>(get_class());
        }
    } // namespace DebugRendererSettings_DebugRendererLegendView
} // namespace app::classes::types
