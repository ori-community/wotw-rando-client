#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityVideoPlayer {
        namespace {
            app::UnityVideoPlayer__Class* type_info_ref = nullptr;
        }
        app::UnityVideoPlayer__Class** type_info = &type_info_ref;
        inline app::UnityVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::UnityVideoPlayer__Class>(type_info, "", "UnityVideoPlayer");
        }
        inline app::UnityVideoPlayer* create() {
            return il2cpp::create_object<app::UnityVideoPlayer>(get_class());
        }
    } // namespace UnityVideoPlayer
} // namespace app::classes::types
