#pragma once
#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsRequest.h>
#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetServerCustomIDsFromPlayFabIDsRequest {
        inline app::GetServerCustomIDsFromPlayFabIDsRequest__Class** type_info() {
            static app::GetServerCustomIDsFromPlayFabIDsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetServerCustomIDsFromPlayFabIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04761F78));
            }
            return cache;
        }
        inline app::GetServerCustomIDsFromPlayFabIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetServerCustomIDsFromPlayFabIDsRequest__Class>(type_info(), "PlayFab.ServerModels", "GetServerCustomIDsFromPlayFabIDsRequest");
        }
        inline app::GetServerCustomIDsFromPlayFabIDsRequest* create() {
            return il2cpp::create_object<app::GetServerCustomIDsFromPlayFabIDsRequest>(get_class());
        }
    } // namespace GetServerCustomIDsFromPlayFabIDsRequest
} // namespace app::classes::types
