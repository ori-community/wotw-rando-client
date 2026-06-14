#pragma once
#include <Modloader/app/structs/GetSharedGroupDataRequest.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetSharedGroupDataRequest {
        inline app::GetSharedGroupDataRequest__Class** type_info() {
            static app::GetSharedGroupDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetSharedGroupDataRequest__Class**)(modloader::win::memory::resolve_rva(0x04723578));
            }
            return cache;
        }
        inline app::GetSharedGroupDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataRequest__Class>(type_info(), "PlayFab.ClientModels", "GetSharedGroupDataRequest");
        }
        inline app::GetSharedGroupDataRequest* create() {
            return il2cpp::create_object<app::GetSharedGroupDataRequest>(get_class());
        }
    } // namespace GetSharedGroupDataRequest
} // namespace app::classes::types
