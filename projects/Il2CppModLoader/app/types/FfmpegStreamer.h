#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FfmpegStreamer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FfmpegStreamer__Class** type_info;
        inline app::FfmpegStreamer__Class* get_class() {
            return il2cpp::get_class<app::FfmpegStreamer__Class>(type_info, "", "FfmpegStreamer");
        }
        inline app::FfmpegStreamer* create() {
            return il2cpp::create_object<app::FfmpegStreamer>(get_class());
        }
    } // namespace FfmpegStreamer
} // namespace app::classes::types
