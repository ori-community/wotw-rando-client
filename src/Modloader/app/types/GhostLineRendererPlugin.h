#pragma once
#include <Modloader/app/structs/GhostLineRendererPlugin.h>
#include <Modloader/app/structs/GhostLineRendererPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostLineRendererPlugin {
        inline app::GhostLineRendererPlugin__Class** type_info() {
            static app::GhostLineRendererPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostLineRendererPlugin__Class**)(modloader::win::memory::resolve_rva(0x04751FC8));
            }
            return cache;
        }
        inline app::GhostLineRendererPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostLineRendererPlugin__Class>(type_info(), "", "GhostLineRendererPlugin");
        }
        inline app::GhostLineRendererPlugin* create() {
            return il2cpp::create_object<app::GhostLineRendererPlugin>(get_class());
        }
    } // namespace GhostLineRendererPlugin
} // namespace app::classes::types
