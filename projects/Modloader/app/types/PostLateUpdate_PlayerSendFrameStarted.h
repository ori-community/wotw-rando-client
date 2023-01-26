#pragma once
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFrameStarted.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFrameStarted__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFrameStarted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerSendFrameStarted {
        inline app::PostLateUpdate_PlayerSendFrameStarted__Class** type_info() {
            static app::PostLateUpdate_PlayerSendFrameStarted__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_PlayerSendFrameStarted__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_PlayerSendFrameStarted__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerSendFrameStarted__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerSendFrameStarted");
        }
        inline app::PostLateUpdate_PlayerSendFrameStarted* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerSendFrameStarted>(get_class());
        }
        inline app::PostLateUpdate_PlayerSendFrameStarted__Boxed* box(app::PostLateUpdate_PlayerSendFrameStarted value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerSendFrameStarted__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerSendFrameStarted
} // namespace app::classes::types
