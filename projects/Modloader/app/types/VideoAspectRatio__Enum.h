#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoAspectRatio__Enum {
        namespace {
            inline app::VideoAspectRatio__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VideoAspectRatio__Enum__Class** type_info = &type_info_ref;
        inline app::VideoAspectRatio__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoAspectRatio__Enum__Class>(type_info, "UnityEngine.Video", "VideoAspectRatio");
        }
        inline app::VideoAspectRatio__Enum* create() {
            return il2cpp::create_object<app::VideoAspectRatio__Enum>(get_class());
        }
    } // namespace VideoAspectRatio__Enum
} // namespace app::classes::types
