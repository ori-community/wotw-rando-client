#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListVirtualMachineSummariesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListVirtualMachineSummariesRequest__Class** type_info;
        inline app::ListVirtualMachineSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListVirtualMachineSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesRequest");
        }
        inline app::ListVirtualMachineSummariesRequest* create() {
            return il2cpp::create_object<app::ListVirtualMachineSummariesRequest>(get_class());
        }
    } // namespace ListVirtualMachineSummariesRequest
} // namespace app::classes::types
