#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FfmpegStreamer__Class.h>
#include <Modloader/app/structs/FfmpegStreamer.h>

namespace app::classes::types {
    namespace FfmpegStreamer {
        inline app::FfmpegStreamer__Class** type_info = (app::FfmpegStreamer__Class**)(modloader::win::memory::resolve_rva(0x04705FD8));
        inline app::FfmpegStreamer__Class* get_class() {
            return il2cpp::get_class<app::FfmpegStreamer__Class>(type_info, "", "FfmpegStreamer");
        }
        inline app::FfmpegStreamer* create() {
            return il2cpp::create_object<app::FfmpegStreamer>(get_class());
        }
    } // namespace FfmpegStreamer
} // namespace app::classes::types
