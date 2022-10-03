#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListVirtualMachineSummariesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListVirtualMachineSummariesResponse__Class** type_info;
        inline app::ListVirtualMachineSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListVirtualMachineSummariesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesResponse");
        }
        inline app::ListVirtualMachineSummariesResponse* create() {
            return il2cpp::create_object<app::ListVirtualMachineSummariesResponse>(get_class());
        }
    } // namespace ListVirtualMachineSummariesResponse
} // namespace app::classes::types
