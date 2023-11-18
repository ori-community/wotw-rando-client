#pragma once
#include <Modloader/app/structs/PlayFabEventType__Enum.h>
#include <Modloader/app/structs/PlayFabEventType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventType__Enum {
        inline app::PlayFabEventType__Enum__Class** type_info() {
            static app::PlayFabEventType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04708DC8));
            }
            return cache;
        }
        inline app::PlayFabEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventType__Enum__Class>(type_info(), "PlayFab", "PlayFabEventType");
        }
        inline app::PlayFabEventType__Enum* create() {
            return il2cpp::create_object<app::PlayFabEventType__Enum>(get_class());
        }
    } // namespace PlayFabEventType__Enum
} // namespace app::classes::types
