#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromTwitchIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromTwitchIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromTwitchIDsResult {
        inline app::GetPlayFabIDsFromTwitchIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromTwitchIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromTwitchIDsResult__Class**)(modloader::win::memory::resolve_rva(0x047097F8));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromTwitchIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromTwitchIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsResult");
        }
        inline app::GetPlayFabIDsFromTwitchIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromTwitchIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromTwitchIDsResult
} // namespace app::classes::types
