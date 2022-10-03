#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUI_Start_d_50 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderPlaybackUI_Start_d_50__Class** type_info;
        inline app::RecorderPlaybackUI_Start_d_50__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderPlaybackUI_Start_d_50__Class>(type_info, "", "RecorderPlaybackUI", "<Start>d__50");
        }
        inline app::RecorderPlaybackUI_Start_d_50* create() {
            return il2cpp::create_object<app::RecorderPlaybackUI_Start_d_50>(get_class());
        }
    } // namespace RecorderPlaybackUI_Start_d_50
} // namespace app::classes::types
