#pragma once
#include <Modloader/app/structs/GhostStateMachinePlugin.h>
#include <Modloader/app/structs/GhostStateMachinePlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostStateMachinePlugin {
        inline app::GhostStateMachinePlugin__Class** type_info() {
            static app::GhostStateMachinePlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostStateMachinePlugin__Class**)(modloader::win::memory::resolve_rva(0x0473FBF8));
            }
            return cache;
        }
        inline app::GhostStateMachinePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostStateMachinePlugin__Class>(type_info(), "", "GhostStateMachinePlugin");
        }
        inline app::GhostStateMachinePlugin* create() {
            return il2cpp::create_object<app::GhostStateMachinePlugin>(get_class());
        }
    } // namespace GhostStateMachinePlugin
} // namespace app::classes::types
