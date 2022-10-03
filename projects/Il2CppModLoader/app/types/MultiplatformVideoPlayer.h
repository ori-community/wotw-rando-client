#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplatformVideoPlayer {
        namespace {
            app::MultiplatformVideoPlayer__Class* type_info_ref = nullptr;
        }
        app::MultiplatformVideoPlayer__Class** type_info = &type_info_ref;
        inline app::MultiplatformVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::MultiplatformVideoPlayer__Class>(type_info, "", "MultiplatformVideoPlayer");
        }
        inline app::MultiplatformVideoPlayer* create() {
            return il2cpp::create_object<app::MultiplatformVideoPlayer>(get_class());
        }
    } // namespace MultiplatformVideoPlayer
} // namespace app::classes::types
