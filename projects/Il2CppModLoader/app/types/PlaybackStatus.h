#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlaybackStatus {
        inline app::PlaybackStatus__Class** type_info = (app::PlaybackStatus__Class**)(modloader::win::memory::resolve_rva(0x04751EF8));
        inline app::PlaybackStatus__Class* get_class() {
            return il2cpp::get_class<app::PlaybackStatus__Class>(type_info, "Moon.Timeline", "PlaybackStatus");
        }
        inline app::PlaybackStatus* create() {
            return il2cpp::create_object<app::PlaybackStatus>(get_class());
        }
    } // namespace PlaybackStatus
} // namespace app::classes::types
