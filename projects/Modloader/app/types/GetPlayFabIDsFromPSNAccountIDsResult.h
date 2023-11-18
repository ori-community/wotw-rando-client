#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsResult {
        inline app::GetPlayFabIDsFromPSNAccountIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromPSNAccountIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromPSNAccountIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0475C218));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromPSNAccountIDsResult");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsResult
} // namespace app::classes::types
