#pragma once
#include <Modloader/app/structs/ScenesManager_ShowFellOutOfWorldMessage_d_257.h>
#include <Modloader/app/structs/ScenesManager_ShowFellOutOfWorldMessage_d_257__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManager_ShowFellOutOfWorldMessage_d_257 {
        inline app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class** type_info() {
            static app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class**)(modloader::win::memory::resolve_rva(0x0477D060));
            }
            return cache;
        }
        inline app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class>(type_info(), "", "ScenesManager", "<ShowFellOutOfWorldMessage>d__257");
        }
        inline app::ScenesManager_ShowFellOutOfWorldMessage_d_257* create() {
            return il2cpp::create_object<app::ScenesManager_ShowFellOutOfWorldMessage_d_257>(get_class());
        }
    } // namespace ScenesManager_ShowFellOutOfWorldMessage_d_257
} // namespace app::classes::types
