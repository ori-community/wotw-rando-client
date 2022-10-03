#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoClip {
        namespace {
            app::VideoClip__Class* type_info_ref = nullptr;
        }
        app::VideoClip__Class** type_info = &type_info_ref;
        inline app::VideoClip__Class* get_class() {
            return il2cpp::get_class<app::VideoClip__Class>(type_info, "UnityEngine.Video", "VideoClip");
        }
        inline app::VideoClip* create() {
            return il2cpp::create_object<app::VideoClip>(get_class());
        }
    } // namespace VideoClip
} // namespace app::classes::types
