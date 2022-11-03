#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabEvents_PlayFabErrorEvent {
        inline app::PlayFabEvents_PlayFabErrorEvent__Class** type_info = (app::PlayFabEvents_PlayFabErrorEvent__Class**)(modloader::win::memory::resolve_rva(0x0476F6E0));
        inline app::PlayFabEvents_PlayFabErrorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabEvents_PlayFabErrorEvent__Class>(type_info, "PlayFab.Events", "PlayFabEvents", "PlayFabErrorEvent");
        }
        inline app::PlayFabEvents_PlayFabErrorEvent* create() {
            return il2cpp::create_object<app::PlayFabEvents_PlayFabErrorEvent>(get_class());
        }
    } // namespace PlayFabEvents_PlayFabErrorEvent
} // namespace app::classes::types
