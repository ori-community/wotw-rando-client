#pragma once
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFramePostPresent.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFramePostPresent__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerSendFramePostPresent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerSendFramePostPresent {
        inline app::PostLateUpdate_PlayerSendFramePostPresent__Class** type_info() {
            static app::PostLateUpdate_PlayerSendFramePostPresent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_PlayerSendFramePostPresent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_PlayerSendFramePostPresent__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerSendFramePostPresent__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerSendFramePostPresent");
        }
        inline app::PostLateUpdate_PlayerSendFramePostPresent* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerSendFramePostPresent>(get_class());
        }
        inline app::PostLateUpdate_PlayerSendFramePostPresent__Boxed* box(app::PostLateUpdate_PlayerSendFramePostPresent value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerSendFramePostPresent__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerSendFramePostPresent
} // namespace app::classes::types
