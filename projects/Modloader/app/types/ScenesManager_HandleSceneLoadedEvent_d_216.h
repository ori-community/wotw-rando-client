#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManager_HandleSceneLoadedEvent_d_216 {
        inline app::ScenesManager_HandleSceneLoadedEvent_d_216__Class** type_info = (app::ScenesManager_HandleSceneLoadedEvent_d_216__Class**)(modloader::win::memory::resolve_rva(0x0473ED10));
        inline app::ScenesManager_HandleSceneLoadedEvent_d_216__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_HandleSceneLoadedEvent_d_216__Class>(type_info, "", "ScenesManager", "<HandleSceneLoadedEvent>d__216");
        }
        inline app::ScenesManager_HandleSceneLoadedEvent_d_216* create() {
            return il2cpp::create_object<app::ScenesManager_HandleSceneLoadedEvent_d_216>(get_class());
        }
    } // namespace ScenesManager_HandleSceneLoadedEvent_d_216
} // namespace app::classes::types
