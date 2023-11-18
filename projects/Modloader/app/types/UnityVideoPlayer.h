#pragma once
#include <Modloader/app/structs/UnityVideoPlayer.h>
#include <Modloader/app/structs/UnityVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityVideoPlayer {
        inline app::UnityVideoPlayer__Class** type_info() {
            static app::UnityVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityVideoPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::UnityVideoPlayer__Class>(type_info(), "", "UnityVideoPlayer");
        }
        inline app::UnityVideoPlayer* create() {
            return il2cpp::create_object<app::UnityVideoPlayer>(get_class());
        }
    } // namespace UnityVideoPlayer
} // namespace app::classes::types
