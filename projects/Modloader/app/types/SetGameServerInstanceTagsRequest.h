#pragma once
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest.h>
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceTagsRequest {
        inline app::SetGameServerInstanceTagsRequest__Class** type_info() {
            static app::SetGameServerInstanceTagsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetGameServerInstanceTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472AAA8));
            }
            return cache;
        }
        inline app::SetGameServerInstanceTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceTagsRequest__Class>(type_info(), "PlayFab.ServerModels", "SetGameServerInstanceTagsRequest");
        }
        inline app::SetGameServerInstanceTagsRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceTagsRequest>(get_class());
        }
    } // namespace SetGameServerInstanceTagsRequest
} // namespace app::classes::types
