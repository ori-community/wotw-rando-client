#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabHttp_ApiProcessErrorEvent {
        inline app::PlayFabHttp_ApiProcessErrorEvent__Class** type_info = (app::PlayFabHttp_ApiProcessErrorEvent__Class**)(modloader::win::memory::resolve_rva(0x04764EB0));
        inline app::PlayFabHttp_ApiProcessErrorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabHttp_ApiProcessErrorEvent__Class>(type_info, "PlayFab.Internal", "PlayFabHttp", "ApiProcessErrorEvent");
        }
        inline app::PlayFabHttp_ApiProcessErrorEvent* create() {
            return il2cpp::create_object<app::PlayFabHttp_ApiProcessErrorEvent>(get_class());
        }
    } // namespace PlayFabHttp_ApiProcessErrorEvent
} // namespace app::classes::types
