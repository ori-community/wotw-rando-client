#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromGameCenterIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGameCenterIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGameCenterIDsResult {
        inline app::GetPlayFabIDsFromGameCenterIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromGameCenterIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromGameCenterIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0476DB90));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromGameCenterIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGameCenterIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsResult");
        }
        inline app::GetPlayFabIDsFromGameCenterIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGameCenterIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGameCenterIDsResult
} // namespace app::classes::types
