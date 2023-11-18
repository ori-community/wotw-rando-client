#pragma once
#include <Modloader/app/structs/ListVirtualMachineSummariesResponse.h>
#include <Modloader/app/structs/ListVirtualMachineSummariesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListVirtualMachineSummariesResponse {
        inline app::ListVirtualMachineSummariesResponse__Class** type_info() {
            static app::ListVirtualMachineSummariesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListVirtualMachineSummariesResponse__Class**)(modloader::win::memory::resolve_rva(0x04769E70));
            }
            return cache;
        }
        inline app::ListVirtualMachineSummariesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListVirtualMachineSummariesResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesResponse");
        }
        inline app::ListVirtualMachineSummariesResponse* create() {
            return il2cpp::create_object<app::ListVirtualMachineSummariesResponse>(get_class());
        }
    } // namespace ListVirtualMachineSummariesResponse
} // namespace app::classes::types
