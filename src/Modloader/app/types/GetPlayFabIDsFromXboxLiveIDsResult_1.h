#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsResult_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsResult_1 {
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class** type_info() {
            static app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04745948));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromXboxLiveIDsResult");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsResult_1
} // namespace app::classes::types
