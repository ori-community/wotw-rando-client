#pragma once
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/PlaybackStatus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaybackStatus {
        inline app::PlaybackStatus__Class** type_info() {
            static app::PlaybackStatus__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlaybackStatus__Class**)(modloader::win::memory::resolve_rva(0x04751EF8));
            }
            return cache;
        }
        inline app::PlaybackStatus__Class* get_class() {
            return il2cpp::get_class<app::PlaybackStatus__Class>(type_info(), "Moon.Timeline", "PlaybackStatus");
        }
        inline app::PlaybackStatus* create() {
            return il2cpp::create_object<app::PlaybackStatus>(get_class());
        }
    } // namespace PlaybackStatus
} // namespace app::classes::types
