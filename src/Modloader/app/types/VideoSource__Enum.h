#pragma once
#include <Modloader/app/structs/VideoSource__Enum.h>
#include <Modloader/app/structs/VideoSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoSource__Enum {
        inline app::VideoSource__Enum__Class** type_info() {
            static app::VideoSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoSource__Enum__Class>(type_info(), "UnityEngine.Video", "VideoSource");
        }
        inline app::VideoSource__Enum* create() {
            return il2cpp::create_object<app::VideoSource__Enum>(get_class());
        }
    } // namespace VideoSource__Enum
} // namespace app::classes::types
