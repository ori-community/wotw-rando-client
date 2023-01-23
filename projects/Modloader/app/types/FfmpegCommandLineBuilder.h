#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FfmpegCommandLineBuilder__Class.h>
#include <Modloader/app/structs/FfmpegCommandLineBuilder.h>

namespace app::classes::types {
    namespace FfmpegCommandLineBuilder {
        inline app::FfmpegCommandLineBuilder__Class** type_info = (app::FfmpegCommandLineBuilder__Class**)(modloader::win::memory::resolve_rva(0x0470E720));
        inline app::FfmpegCommandLineBuilder__Class* get_class() {
            return il2cpp::get_class<app::FfmpegCommandLineBuilder__Class>(type_info, "", "FfmpegCommandLineBuilder");
        }
        inline app::FfmpegCommandLineBuilder* create() {
            return il2cpp::create_object<app::FfmpegCommandLineBuilder>(get_class());
        }
    } // namespace FfmpegCommandLineBuilder
} // namespace app::classes::types
