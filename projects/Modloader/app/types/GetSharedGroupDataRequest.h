#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest__Class.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest.h>

namespace app::classes::types {
    namespace GetSharedGroupDataRequest {
        inline app::GetSharedGroupDataRequest__Class** type_info = (app::GetSharedGroupDataRequest__Class**)(modloader::win::memory::resolve_rva(0x04723578));
        inline app::GetSharedGroupDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetSharedGroupDataRequest");
        }
        inline app::GetSharedGroupDataRequest* create() {
            return il2cpp::create_object<app::GetSharedGroupDataRequest>(get_class());
        }
    } // namespace GetSharedGroupDataRequest
} // namespace app::classes::types
