#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoPlayer {
        namespace {
            inline app::VideoPlayer__Class* type_info_ref = nullptr;
        }
        inline app::VideoPlayer__Class** type_info = &type_info_ref;
        inline app::VideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::VideoPlayer__Class>(type_info, "UnityEngine.Video", "VideoPlayer");
        }
        inline app::VideoPlayer* create() {
            return il2cpp::create_object<app::VideoPlayer>(get_class());
        }
    } // namespace VideoPlayer
} // namespace app::classes::types
