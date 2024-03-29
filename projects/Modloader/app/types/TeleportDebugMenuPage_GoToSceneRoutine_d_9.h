#pragma once
#include <Modloader/app/structs/TeleportDebugMenuPage_GoToSceneRoutine_d_9.h>
#include <Modloader/app/structs/TeleportDebugMenuPage_GoToSceneRoutine_d_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportDebugMenuPage_GoToSceneRoutine_d_9 {
        inline app::TeleportDebugMenuPage_GoToSceneRoutine_d_9__Class** type_info() {
            static app::TeleportDebugMenuPage_GoToSceneRoutine_d_9__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TeleportDebugMenuPage_GoToSceneRoutine_d_9__Class**)(modloader::win::memory::resolve_rva(0x04727F90));
            }
            return cache;
        }
        inline app::TeleportDebugMenuPage_GoToSceneRoutine_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::TeleportDebugMenuPage_GoToSceneRoutine_d_9__Class>(type_info(), "", "TeleportDebugMenuPage", "<GoToSceneRoutine>d__9");
        }
        inline app::TeleportDebugMenuPage_GoToSceneRoutine_d_9* create() {
            return il2cpp::create_object<app::TeleportDebugMenuPage_GoToSceneRoutine_d_9>(get_class());
        }
    } // namespace TeleportDebugMenuPage_GoToSceneRoutine_d_9
} // namespace app::classes::types
