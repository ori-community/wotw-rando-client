#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FfmpegCommandLineBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FfmpegCommandLineBuilder__Class** type_info;
        inline app::FfmpegCommandLineBuilder__Class* get_class() {
            return il2cpp::get_class<app::FfmpegCommandLineBuilder__Class>(type_info, "", "FfmpegCommandLineBuilder");
        }
        inline app::FfmpegCommandLineBuilder* create() {
            return il2cpp::create_object<app::FfmpegCommandLineBuilder>(get_class());
        }
    } // namespace FfmpegCommandLineBuilder
} // namespace app::classes::types
