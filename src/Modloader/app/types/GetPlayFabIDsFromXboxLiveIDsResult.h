#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsResult {
        inline app::GetPlayFabIDsFromXboxLiveIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromXboxLiveIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromXboxLiveIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04767F30));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromXboxLiveIDsResult");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsResult
} // namespace app::classes::types
