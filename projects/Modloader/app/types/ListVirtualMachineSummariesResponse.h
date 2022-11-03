#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListVirtualMachineSummariesResponse {
        inline app::ListVirtualMachineSummariesResponse__Class** type_info = (app::ListVirtualMachineSummariesResponse__Class**)(modloader::win::memory::resolve_rva(0x04769E70));
        inline app::ListVirtualMachineSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListVirtualMachineSummariesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesResponse");
        }
        inline app::ListVirtualMachineSummariesResponse* create() {
            return il2cpp::create_object<app::ListVirtualMachineSummariesResponse>(get_class());
        }
    } // namespace ListVirtualMachineSummariesResponse
} // namespace app::classes::types
