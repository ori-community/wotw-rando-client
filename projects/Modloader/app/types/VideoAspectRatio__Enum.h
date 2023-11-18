#pragma once
#include <Modloader/app/structs/VideoAspectRatio__Enum.h>
#include <Modloader/app/structs/VideoAspectRatio__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoAspectRatio__Enum {
        inline app::VideoAspectRatio__Enum__Class** type_info() {
            static app::VideoAspectRatio__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoAspectRatio__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoAspectRatio__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoAspectRatio__Enum__Class>(type_info(), "UnityEngine.Video", "VideoAspectRatio");
        }
        inline app::VideoAspectRatio__Enum* create() {
            return il2cpp::create_object<app::VideoAspectRatio__Enum>(get_class());
        }
    } // namespace VideoAspectRatio__Enum
} // namespace app::classes::types
