#pragma once
#include <Modloader/app/structs/ListMultiplayerServersRequest.h>
#include <Modloader/app/structs/ListMultiplayerServersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMultiplayerServersRequest {
        inline app::ListMultiplayerServersRequest__Class** type_info() {
            static app::ListMultiplayerServersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMultiplayerServersRequest__Class**)(modloader::win::memory::resolve_rva(0x047773F8));
            }
            return cache;
        }
        inline app::ListMultiplayerServersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMultiplayerServersRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListMultiplayerServersRequest");
        }
        inline app::ListMultiplayerServersRequest* create() {
            return il2cpp::create_object<app::ListMultiplayerServersRequest>(get_class());
        }
    } // namespace ListMultiplayerServersRequest
} // namespace app::classes::types
