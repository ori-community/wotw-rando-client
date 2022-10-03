#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoTimeReference__Enum {
        namespace {
            app::VideoTimeReference__Enum__Class* type_info_ref = nullptr;
        }
        app::VideoTimeReference__Enum__Class** type_info = &type_info_ref;
        inline app::VideoTimeReference__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoTimeReference__Enum__Class>(type_info, "UnityEngine.Video", "VideoTimeReference");
        }
        inline app::VideoTimeReference__Enum* create() {
            return il2cpp::create_object<app::VideoTimeReference__Enum>(get_class());
        }
    } // namespace VideoTimeReference__Enum
} // namespace app::classes::types
