#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplatformVideoPlayer__Class.h>
#include <Modloader/app/structs/MultiplatformVideoPlayer.h>

namespace app::classes::types {
    namespace MultiplatformVideoPlayer {
        namespace {
            inline app::MultiplatformVideoPlayer__Class* type_info_ref = nullptr;
        }
        inline app::MultiplatformVideoPlayer__Class** type_info = &type_info_ref;
        inline app::MultiplatformVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::MultiplatformVideoPlayer__Class>(type_info, "", "MultiplatformVideoPlayer");
        }
        inline app::MultiplatformVideoPlayer* create() {
            return il2cpp::create_object<app::MultiplatformVideoPlayer>(get_class());
        }
    } // namespace MultiplatformVideoPlayer
} // namespace app::classes::types
