#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteEventResponse {
        inline app::WriteEventResponse__Class** type_info = (app::WriteEventResponse__Class**)(modloader::win::memory::resolve_rva(0x04710E40));
        inline app::WriteEventResponse__Class* get_class() {
            return il2cpp::get_class<app::WriteEventResponse__Class>(type_info, "PlayFab.ClientModels", "WriteEventResponse");
        }
        inline app::WriteEventResponse* create() {
            return il2cpp::create_object<app::WriteEventResponse>(get_class());
        }
    } // namespace WriteEventResponse
} // namespace app::classes::types
