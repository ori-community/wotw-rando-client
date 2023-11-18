#pragma once
#include <Modloader/app/structs/VideoTimeSource__Enum.h>
#include <Modloader/app/structs/VideoTimeSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoTimeSource__Enum {
        inline app::VideoTimeSource__Enum__Class** type_info() {
            static app::VideoTimeSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoTimeSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoTimeSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoTimeSource__Enum__Class>(type_info(), "UnityEngine.Video", "VideoTimeSource");
        }
        inline app::VideoTimeSource__Enum* create() {
            return il2cpp::create_object<app::VideoTimeSource__Enum>(get_class());
        }
    } // namespace VideoTimeSource__Enum
} // namespace app::classes::types
