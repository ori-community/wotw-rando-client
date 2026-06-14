#pragma once
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoResultPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResultPayload {
        inline app::GetPlayerCombinedInfoResultPayload__Class** type_info() {
            static app::GetPlayerCombinedInfoResultPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerCombinedInfoResultPayload__Class**)(modloader::win::memory::resolve_rva(0x0478FFB0));
            }
            return cache;
        }
        inline app::GetPlayerCombinedInfoResultPayload__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResultPayload__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerCombinedInfoResultPayload");
        }
        inline app::GetPlayerCombinedInfoResultPayload* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResultPayload>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResultPayload
} // namespace app::classes::types
