#pragma once
#include <Modloader/app/structs/GhostUberStatePlugin.h>
#include <Modloader/app/structs/GhostUberStatePlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostUberStatePlugin {
        inline app::GhostUberStatePlugin__Class** type_info() {
            static app::GhostUberStatePlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostUberStatePlugin__Class**)(modloader::win::memory::resolve_rva(0x0470EE38));
            }
            return cache;
        }
        inline app::GhostUberStatePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostUberStatePlugin__Class>(type_info(), "", "GhostUberStatePlugin");
        }
        inline app::GhostUberStatePlugin* create() {
            return il2cpp::create_object<app::GhostUberStatePlugin>(get_class());
        }
    } // namespace GhostUberStatePlugin
} // namespace app::classes::types
