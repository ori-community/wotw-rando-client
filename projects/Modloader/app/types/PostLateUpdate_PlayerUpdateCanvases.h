#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerUpdateCanvases {
        namespace {
            inline app::PostLateUpdate_PlayerUpdateCanvases__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_PlayerUpdateCanvases__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_PlayerUpdateCanvases__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerUpdateCanvases__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerUpdateCanvases");
        }
        inline app::PostLateUpdate_PlayerUpdateCanvases* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerUpdateCanvases>(get_class());
        }
        inline app::PostLateUpdate_PlayerUpdateCanvases__Boxed* box(app::PostLateUpdate_PlayerUpdateCanvases value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerUpdateCanvases__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerUpdateCanvases
} // namespace app::classes::types
