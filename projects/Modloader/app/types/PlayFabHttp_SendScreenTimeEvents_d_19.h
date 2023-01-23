#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabHttp_SendScreenTimeEvents_d_19__Class.h>
#include <Modloader/app/structs/PlayFabHttp_SendScreenTimeEvents_d_19.h>

namespace app::classes::types {
    namespace PlayFabHttp_SendScreenTimeEvents_d_19 {
        inline app::PlayFabHttp_SendScreenTimeEvents_d_19__Class** type_info = (app::PlayFabHttp_SendScreenTimeEvents_d_19__Class**)(modloader::win::memory::resolve_rva(0x04793128));
        inline app::PlayFabHttp_SendScreenTimeEvents_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabHttp_SendScreenTimeEvents_d_19__Class>(type_info, "PlayFab.Internal", "PlayFabHttp", "<SendScreenTimeEvents>d__19");
        }
        inline app::PlayFabHttp_SendScreenTimeEvents_d_19* create() {
            return il2cpp::create_object<app::PlayFabHttp_SendScreenTimeEvents_d_19>(get_class());
        }
    } // namespace PlayFabHttp_SendScreenTimeEvents_d_19
} // namespace app::classes::types
