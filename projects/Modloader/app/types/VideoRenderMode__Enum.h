#pragma once
#include <Modloader/app/structs/VideoRenderMode__Enum.h>
#include <Modloader/app/structs/VideoRenderMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoRenderMode__Enum {
        inline app::VideoRenderMode__Enum__Class** type_info() {
            static app::VideoRenderMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoRenderMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoRenderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoRenderMode__Enum__Class>(type_info(), "UnityEngine.Video", "VideoRenderMode");
        }
        inline app::VideoRenderMode__Enum* create() {
            return il2cpp::create_object<app::VideoRenderMode__Enum>(get_class());
        }
    } // namespace VideoRenderMode__Enum
} // namespace app::classes::types
