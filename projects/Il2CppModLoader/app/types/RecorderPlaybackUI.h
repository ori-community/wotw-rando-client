#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderPlaybackUI__Class** type_info;
        inline app::RecorderPlaybackUI__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUI__Class>(type_info, "", "RecorderPlaybackUI");
        }
        inline app::RecorderPlaybackUI* create() {
            return il2cpp::create_object<app::RecorderPlaybackUI>(get_class());
        }
    } // namespace RecorderPlaybackUI
} // namespace app::classes::types
