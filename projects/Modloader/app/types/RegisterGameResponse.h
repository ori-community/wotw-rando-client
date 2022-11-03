#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegisterGameResponse {
        inline app::RegisterGameResponse__Class** type_info = (app::RegisterGameResponse__Class**)(modloader::win::memory::resolve_rva(0x0474D770));
        inline app::RegisterGameResponse__Class* get_class() {
            return il2cpp::get_class<app::RegisterGameResponse__Class>(type_info, "PlayFab.ServerModels", "RegisterGameResponse");
        }
        inline app::RegisterGameResponse* create() {
            return il2cpp::create_object<app::RegisterGameResponse>(get_class());
        }
    } // namespace RegisterGameResponse
} // namespace app::classes::types
