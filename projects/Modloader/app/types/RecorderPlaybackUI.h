#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderPlaybackUI {
        inline app::RecorderPlaybackUI__Class** type_info = (app::RecorderPlaybackUI__Class**)(modloader::win::memory::resolve_rva(0x0477CB08));
        inline app::RecorderPlaybackUI__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUI__Class>(type_info, "", "RecorderPlaybackUI");
        }
        inline app::RecorderPlaybackUI* create() {
            return il2cpp::create_object<app::RecorderPlaybackUI>(get_class());
        }
    } // namespace RecorderPlaybackUI
} // namespace app::classes::types
