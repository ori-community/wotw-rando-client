#pragma once
#include <Modloader/app/structs/PlayFabEvent.h>
#include <Modloader/app/structs/PlayFabEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEvent {
        inline app::PlayFabEvent__Class** type_info() {
            static app::PlayFabEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEvent__Class**)(modloader::win::memory::resolve_rva(0x0477D0D0));
            }
            return cache;
        }
        inline app::PlayFabEvent__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEvent__Class>(type_info(), "PlayFab", "PlayFabEvent");
        }
        inline app::PlayFabEvent* create() {
            return il2cpp::create_object<app::PlayFabEvent>(get_class());
        }
    } // namespace PlayFabEvent
} // namespace app::classes::types
