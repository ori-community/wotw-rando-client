#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoTimeSource__Enum {
        namespace {
            app::VideoTimeSource__Enum__Class* type_info_ref = nullptr;
        }
        app::VideoTimeSource__Enum__Class** type_info = &type_info_ref;
        inline app::VideoTimeSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoTimeSource__Enum__Class>(type_info, "UnityEngine.Video", "VideoTimeSource");
        }
        inline app::VideoTimeSource__Enum* create() {
            return il2cpp::create_object<app::VideoTimeSource__Enum>(get_class());
        }
    } // namespace VideoTimeSource__Enum
} // namespace app::classes::types
