#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateBansRequest {
        inline app::UpdateBansRequest__Class** type_info = (app::UpdateBansRequest__Class**)(modloader::win::memory::resolve_rva(0x04743660));
        inline app::UpdateBansRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBansRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateBansRequest");
        }
        inline app::UpdateBansRequest* create() {
            return il2cpp::create_object<app::UpdateBansRequest>(get_class());
        }
    } // namespace UpdateBansRequest
} // namespace app::classes::types
