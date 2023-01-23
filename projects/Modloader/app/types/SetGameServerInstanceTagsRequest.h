#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest__Class.h>
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest.h>

namespace app::classes::types {
    namespace SetGameServerInstanceTagsRequest {
        inline app::SetGameServerInstanceTagsRequest__Class** type_info = (app::SetGameServerInstanceTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472AAA8));
        inline app::SetGameServerInstanceTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceTagsRequest__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceTagsRequest");
        }
        inline app::SetGameServerInstanceTagsRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceTagsRequest>(get_class());
        }
    } // namespace SetGameServerInstanceTagsRequest
} // namespace app::classes::types
