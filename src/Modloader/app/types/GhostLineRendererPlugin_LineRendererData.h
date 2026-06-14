#pragma once
#include <Modloader/app/structs/GhostLineRendererPlugin_LineRendererData.h>
#include <Modloader/app/structs/GhostLineRendererPlugin_LineRendererData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostLineRendererPlugin_LineRendererData {
        inline app::GhostLineRendererPlugin_LineRendererData__Class** type_info() {
            static app::GhostLineRendererPlugin_LineRendererData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostLineRendererPlugin_LineRendererData__Class**)(modloader::win::memory::resolve_rva(0x0471BF30));
            }
            return cache;
        }
        inline app::GhostLineRendererPlugin_LineRendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostLineRendererPlugin_LineRendererData__Class>(type_info(), "", "GhostLineRendererPlugin", "LineRendererData");
        }
        inline app::GhostLineRendererPlugin_LineRendererData* create() {
            return il2cpp::create_object<app::GhostLineRendererPlugin_LineRendererData>(get_class());
        }
    } // namespace GhostLineRendererPlugin_LineRendererData
} // namespace app::classes::types
