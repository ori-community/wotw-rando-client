#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VideoClipPlayable__Class.h>
#include <Modloader/app/structs/VideoClipPlayable.h>
#include <Modloader/app/structs/VideoClipPlayable__Boxed.h>

namespace app::classes::types {
    namespace VideoClipPlayable {
        namespace {
            inline app::VideoClipPlayable__Class* type_info_ref = nullptr;
        }
        inline app::VideoClipPlayable__Class** type_info = &type_info_ref;
        inline app::VideoClipPlayable__Class* get_class() {
            return il2cpp::get_class<app::VideoClipPlayable__Class>(type_info, "UnityEngine.Experimental.Video", "VideoClipPlayable");
        }
        inline app::VideoClipPlayable* create() {
            return il2cpp::create_object<app::VideoClipPlayable>(get_class());
        }
        inline app::VideoClipPlayable__Boxed* box(app::VideoClipPlayable value) {
            return il2cpp::box_value<app::VideoClipPlayable__Boxed>(get_class(), value);
        }
    } // namespace VideoClipPlayable
} // namespace app::classes::types
