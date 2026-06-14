#pragma once
#include <Modloader/app/structs/WindowsVideoPlayer.h>
#include <Modloader/app/structs/WindowsVideoPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindowsVideoPlayer {
        inline app::WindowsVideoPlayer__Class** type_info() {
            static app::WindowsVideoPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindowsVideoPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindowsVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::WindowsVideoPlayer__Class>(type_info(), "", "WindowsVideoPlayer");
        }
        inline app::WindowsVideoPlayer* create() {
            return il2cpp::create_object<app::WindowsVideoPlayer>(get_class());
        }
    } // namespace WindowsVideoPlayer
} // namespace app::classes::types
