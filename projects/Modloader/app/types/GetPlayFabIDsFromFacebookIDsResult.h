#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsResult {
        inline app::GetPlayFabIDsFromFacebookIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromFacebookIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromFacebookIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04768B28));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromFacebookIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsResult");
        }
        inline app::GetPlayFabIDsFromFacebookIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsResult
} // namespace app::classes::types
