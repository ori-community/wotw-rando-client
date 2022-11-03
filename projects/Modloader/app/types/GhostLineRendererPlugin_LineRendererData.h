#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostLineRendererPlugin_LineRendererData {
        inline app::GhostLineRendererPlugin_LineRendererData__Class** type_info = (app::GhostLineRendererPlugin_LineRendererData__Class**)(modloader::win::memory::resolve_rva(0x0471BF30));
        inline app::GhostLineRendererPlugin_LineRendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostLineRendererPlugin_LineRendererData__Class>(type_info, "", "GhostLineRendererPlugin", "LineRendererData");
        }
        inline app::GhostLineRendererPlugin_LineRendererData* create() {
            return il2cpp::create_object<app::GhostLineRendererPlugin_LineRendererData>(get_class());
        }
    } // namespace GhostLineRendererPlugin_LineRendererData
} // namespace app::classes::types
