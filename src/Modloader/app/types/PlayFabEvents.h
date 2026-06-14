#pragma once
#include <Modloader/app/structs/PlayFabEvents.h>
#include <Modloader/app/structs/PlayFabEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEvents {
        inline app::PlayFabEvents__Class** type_info() {
            static app::PlayFabEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEvents__Class**)(modloader::win::memory::resolve_rva(0x0470D410));
            }
            return cache;
        }
        inline app::PlayFabEvents__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEvents__Class>(type_info(), "PlayFab.Events", "PlayFabEvents");
        }
        inline app::PlayFabEvents* create() {
            return il2cpp::create_object<app::PlayFabEvents>(get_class());
        }
    } // namespace PlayFabEvents
} // namespace app::classes::types
