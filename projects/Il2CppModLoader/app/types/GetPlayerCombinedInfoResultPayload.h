#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResultPayload {
        inline app::GetPlayerCombinedInfoResultPayload__Class** type_info = (app::GetPlayerCombinedInfoResultPayload__Class**)(modloader::win::memory::resolve_rva(0x0478FFB0));
        inline app::GetPlayerCombinedInfoResultPayload__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResultPayload__Class>(type_info, "PlayFab.ClientModels", "GetPlayerCombinedInfoResultPayload");
        }
        inline app::GetPlayerCombinedInfoResultPayload* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResultPayload>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResultPayload
} // namespace app::classes::types
