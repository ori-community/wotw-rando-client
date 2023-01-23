#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugRendererSettings_DebugRendererLegendView__Class.h>
#include <Modloader/app/structs/DebugRendererSettings_DebugRendererLegendView.h>

namespace app::classes::types {
    namespace DebugRendererSettings_DebugRendererLegendView {
        inline app::DebugRendererSettings_DebugRendererLegendView__Class** type_info = (app::DebugRendererSettings_DebugRendererLegendView__Class**)(modloader::win::memory::resolve_rva(0x0471EC20));
        inline app::DebugRendererSettings_DebugRendererLegendView__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugRendererSettings_DebugRendererLegendView__Class>(type_info, "", "DebugRendererSettings", "DebugRendererLegendView");
        }
        inline app::DebugRendererSettings_DebugRendererLegendView* create() {
            return il2cpp::create_object<app::DebugRendererSettings_DebugRendererLegendView>(get_class());
        }
    } // namespace DebugRendererSettings_DebugRendererLegendView
} // namespace app::classes::types
