#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoSource__Enum {
        namespace {
            app::VideoSource__Enum__Class* type_info_ref = nullptr;
        }
        app::VideoSource__Enum__Class** type_info = &type_info_ref;
        inline app::VideoSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoSource__Enum__Class>(type_info, "UnityEngine.Video", "VideoSource");
        }
        inline app::VideoSource__Enum* create() {
            return il2cpp::create_object<app::VideoSource__Enum>(get_class());
        }
    } // namespace VideoSource__Enum
} // namespace app::classes::types
