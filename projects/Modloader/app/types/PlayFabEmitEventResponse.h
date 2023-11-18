#pragma once
#include <Modloader/app/structs/PlayFabEmitEventResponse.h>
#include <Modloader/app/structs/PlayFabEmitEventResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEmitEventResponse {
        inline app::PlayFabEmitEventResponse__Class** type_info() {
            static app::PlayFabEmitEventResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEmitEventResponse__Class**)(modloader::win::memory::resolve_rva(0x04712848));
            }
            return cache;
        }
        inline app::PlayFabEmitEventResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventResponse__Class>(type_info(), "PlayFab", "PlayFabEmitEventResponse");
        }
        inline app::PlayFabEmitEventResponse* create() {
            return il2cpp::create_object<app::PlayFabEmitEventResponse>(get_class());
        }
    } // namespace PlayFabEmitEventResponse
} // namespace app::classes::types
