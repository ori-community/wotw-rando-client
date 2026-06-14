#pragma once
#include <Modloader/app/structs/VideoTimeReference__Enum.h>
#include <Modloader/app/structs/VideoTimeReference__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoTimeReference__Enum {
        inline app::VideoTimeReference__Enum__Class** type_info() {
            static app::VideoTimeReference__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoTimeReference__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoTimeReference__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoTimeReference__Enum__Class>(type_info(), "UnityEngine.Video", "VideoTimeReference");
        }
        inline app::VideoTimeReference__Enum* create() {
            return il2cpp::create_object<app::VideoTimeReference__Enum>(get_class());
        }
    } // namespace VideoTimeReference__Enum
} // namespace app::classes::types
