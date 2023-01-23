#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostStateMachinePlugin__Class.h>
#include <Modloader/app/structs/GhostStateMachinePlugin.h>

namespace app::classes::types {
    namespace GhostStateMachinePlugin {
        inline app::GhostStateMachinePlugin__Class** type_info = (app::GhostStateMachinePlugin__Class**)(modloader::win::memory::resolve_rva(0x0473FBF8));
        inline app::GhostStateMachinePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostStateMachinePlugin__Class>(type_info, "", "GhostStateMachinePlugin");
        }
        inline app::GhostStateMachinePlugin* create() {
            return il2cpp::create_object<app::GhostStateMachinePlugin>(get_class());
        }
    } // namespace GhostStateMachinePlugin
} // namespace app::classes::types
