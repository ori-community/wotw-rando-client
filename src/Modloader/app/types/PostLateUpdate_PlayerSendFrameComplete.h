#pragma once
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFrameComplete.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFrameComplete__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFrameComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerSendFrameComplete {
        inline app::PostLateUpdate_PlayerSendFrameComplete__Class** type_info() {
            static app::PostLateUpdate_PlayerSendFrameComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_PlayerSendFrameComplete__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_PlayerSendFrameComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerSendFrameComplete__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerSendFrameComplete");
        }
        inline app::PostLateUpdate_PlayerSendFrameComplete* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerSendFrameComplete>(get_class());
        }
        inline app::PostLateUpdate_PlayerSendFrameComplete__Boxed* box(app::PostLateUpdate_PlayerSendFrameComplete value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerSendFrameComplete__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerSendFrameComplete
} // namespace app::classes::types
