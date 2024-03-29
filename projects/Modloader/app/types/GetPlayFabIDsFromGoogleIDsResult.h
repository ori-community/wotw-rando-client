#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromGoogleIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGoogleIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGoogleIDsResult {
        inline app::GetPlayFabIDsFromGoogleIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromGoogleIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromGoogleIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04730F58));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromGoogleIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGoogleIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsResult");
        }
        inline app::GetPlayFabIDsFromGoogleIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGoogleIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGoogleIDsResult
} // namespace app::classes::types
