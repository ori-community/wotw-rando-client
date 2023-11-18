#pragma once
#include <Modloader/app/structs/PlayFallAnimation.h>
#include <Modloader/app/structs/PlayFallAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFallAnimation {
        inline app::PlayFallAnimation__Class** type_info() {
            static app::PlayFallAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFallAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFallAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayFallAnimation__Class>(type_info(), "", "PlayFallAnimation");
        }
        inline app::PlayFallAnimation* create() {
            return il2cpp::create_object<app::PlayFallAnimation>(get_class());
        }
    } // namespace PlayFallAnimation
} // namespace app::classes::types
