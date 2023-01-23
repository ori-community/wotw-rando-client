#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindowsVideoPlayer__Class.h>
#include <Modloader/app/structs/WindowsVideoPlayer.h>

namespace app::classes::types {
    namespace WindowsVideoPlayer {
        namespace {
            inline app::WindowsVideoPlayer__Class* type_info_ref = nullptr;
        }
        inline app::WindowsVideoPlayer__Class** type_info = &type_info_ref;
        inline app::WindowsVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::WindowsVideoPlayer__Class>(type_info, "", "WindowsVideoPlayer");
        }
        inline app::WindowsVideoPlayer* create() {
            return il2cpp::create_object<app::WindowsVideoPlayer>(get_class());
        }
    } // namespace WindowsVideoPlayer
} // namespace app::classes::types
