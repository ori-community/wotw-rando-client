#pragma once
#include <Modloader/app/structs/VideoClipPlayable.h>
#include <Modloader/app/structs/VideoClipPlayable__Boxed.h>
#include <Modloader/app/structs/VideoClipPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoClipPlayable {
        inline app::VideoClipPlayable__Class** type_info() {
            static app::VideoClipPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoClipPlayable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoClipPlayable__Class* get_class() {
            return il2cpp::get_class<app::VideoClipPlayable__Class>(type_info(), "UnityEngine.Experimental.Video", "VideoClipPlayable");
        }
        inline app::VideoClipPlayable* create() {
            return il2cpp::create_object<app::VideoClipPlayable>(get_class());
        }
        inline app::VideoClipPlayable__Boxed* box(app::VideoClipPlayable value) {
            return il2cpp::box_value<app::VideoClipPlayable__Boxed>(get_class(), value);
        }
    } // namespace VideoClipPlayable
} // namespace app::classes::types
