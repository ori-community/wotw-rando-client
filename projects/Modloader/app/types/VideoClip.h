#pragma once
#include <Modloader/app/structs/VideoClip.h>
#include <Modloader/app/structs/VideoClip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoClip {
        inline app::VideoClip__Class** type_info() {
            static app::VideoClip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoClip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoClip__Class* get_class() {
            return il2cpp::get_class<app::VideoClip__Class>(type_info(), "UnityEngine.Video", "VideoClip");
        }
        inline app::VideoClip* create() {
            return il2cpp::create_object<app::VideoClip>(get_class());
        }
    } // namespace VideoClip
} // namespace app::classes::types
