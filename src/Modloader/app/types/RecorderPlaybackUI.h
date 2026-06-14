#pragma once
#include <Modloader/app/structs/RecorderPlaybackUI.h>
#include <Modloader/app/structs/RecorderPlaybackUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderPlaybackUI {
        inline app::RecorderPlaybackUI__Class** type_info() {
            static app::RecorderPlaybackUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderPlaybackUI__Class**)(modloader::win::memory::resolve_rva(0x0477CB08));
            }
            return cache;
        }
        inline app::RecorderPlaybackUI__Class* get_class() {
            return il2cpp::get_class<app::RecorderPlaybackUI__Class>(type_info(), "", "RecorderPlaybackUI");
        }
        inline app::RecorderPlaybackUI* create() {
            return il2cpp::create_object<app::RecorderPlaybackUI>(get_class());
        }
    } // namespace RecorderPlaybackUI
} // namespace app::classes::types
