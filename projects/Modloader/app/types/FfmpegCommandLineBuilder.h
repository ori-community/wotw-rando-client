#pragma once
#include <Modloader/app/structs/FfmpegCommandLineBuilder.h>
#include <Modloader/app/structs/FfmpegCommandLineBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FfmpegCommandLineBuilder {
        inline app::FfmpegCommandLineBuilder__Class** type_info() {
            static app::FfmpegCommandLineBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FfmpegCommandLineBuilder__Class**)(modloader::win::memory::resolve_rva(0x0470E720));
            }
            return cache;
        }
        inline app::FfmpegCommandLineBuilder__Class* get_class() {
            return il2cpp::get_class<app::FfmpegCommandLineBuilder__Class>(type_info(), "", "FfmpegCommandLineBuilder");
        }
        inline app::FfmpegCommandLineBuilder* create() {
            return il2cpp::create_object<app::FfmpegCommandLineBuilder>(get_class());
        }
    } // namespace FfmpegCommandLineBuilder
} // namespace app::classes::types
