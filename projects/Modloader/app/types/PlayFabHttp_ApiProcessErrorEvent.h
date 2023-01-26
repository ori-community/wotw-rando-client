#pragma once
#include <Modloader/app/structs/PlayFabHttp_ApiProcessErrorEvent.h>
#include <Modloader/app/structs/PlayFabHttp_ApiProcessErrorEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabHttp_ApiProcessErrorEvent {
        inline app::PlayFabHttp_ApiProcessErrorEvent__Class** type_info() {
            static app::PlayFabHttp_ApiProcessErrorEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabHttp_ApiProcessErrorEvent__Class**)(modloader::win::memory::resolve_rva(0x04764EB0));
            }
            return cache;
        }
        inline app::PlayFabHttp_ApiProcessErrorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabHttp_ApiProcessErrorEvent__Class>(type_info(), "PlayFab.Internal", "PlayFabHttp", "ApiProcessErrorEvent");
        }
        inline app::PlayFabHttp_ApiProcessErrorEvent* create() {
            return il2cpp::create_object<app::PlayFabHttp_ApiProcessErrorEvent>(get_class());
        }
    } // namespace PlayFabHttp_ApiProcessErrorEvent
} // namespace app::classes::types
