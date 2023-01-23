#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetPublisherDataRequest__Class.h>
#include <Modloader/app/structs/SetPublisherDataRequest.h>

namespace app::classes::types {
    namespace SetPublisherDataRequest {
        inline app::SetPublisherDataRequest__Class** type_info = (app::SetPublisherDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0478B778));
        inline app::SetPublisherDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetPublisherDataRequest__Class>(type_info, "PlayFab.ServerModels", "SetPublisherDataRequest");
        }
        inline app::SetPublisherDataRequest* create() {
            return il2cpp::create_object<app::SetPublisherDataRequest>(get_class());
        }
    } // namespace SetPublisherDataRequest
} // namespace app::classes::types
