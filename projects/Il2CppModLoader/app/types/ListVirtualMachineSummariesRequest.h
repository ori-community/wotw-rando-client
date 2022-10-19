#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListVirtualMachineSummariesRequest {
        inline app::ListVirtualMachineSummariesRequest__Class** type_info = (app::ListVirtualMachineSummariesRequest__Class**)(modloader::win::memory::resolve_rva(0x04708B60));
        inline app::ListVirtualMachineSummariesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListVirtualMachineSummariesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesRequest");
        }
        inline app::ListVirtualMachineSummariesRequest* create() {
            return il2cpp::create_object<app::ListVirtualMachineSummariesRequest>(get_class());
        }
    } // namespace ListVirtualMachineSummariesRequest
} // namespace app::classes::types
