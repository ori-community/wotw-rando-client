#pragma once
#include <Modloader/app/structs/PlayFabEmitEventCallback.h>
#include <Modloader/app/structs/PlayFabEmitEventCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEmitEventCallback {
        inline app::PlayFabEmitEventCallback__Class** type_info() {
            static app::PlayFabEmitEventCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabEmitEventCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabEmitEventCallback__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventCallback__Class>(type_info(), "PlayFab", "PlayFabEmitEventCallback");
        }
        inline app::PlayFabEmitEventCallback* create() {
            return il2cpp::create_object<app::PlayFabEmitEventCallback>(get_class());
        }
    } // namespace PlayFabEmitEventCallback
} // namespace app::classes::types
