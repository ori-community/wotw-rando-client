#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerSendFramePostPresent {
        namespace {
            inline app::PostLateUpdate_PlayerSendFramePostPresent__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_PlayerSendFramePostPresent__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_PlayerSendFramePostPresent__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerSendFramePostPresent__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerSendFramePostPresent");
        }
        inline app::PostLateUpdate_PlayerSendFramePostPresent* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerSendFramePostPresent>(get_class());
        }
        inline app::PostLateUpdate_PlayerSendFramePostPresent__Boxed* box(app::PostLateUpdate_PlayerSendFramePostPresent value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerSendFramePostPresent__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerSendFramePostPresent
} // namespace app::classes::types
