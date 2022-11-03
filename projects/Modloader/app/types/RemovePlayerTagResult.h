#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemovePlayerTagResult {
        inline app::RemovePlayerTagResult__Class** type_info = (app::RemovePlayerTagResult__Class**)(modloader::win::memory::resolve_rva(0x04734F78));
        inline app::RemovePlayerTagResult__Class* get_class() {
            return il2cpp::get_class<app::RemovePlayerTagResult__Class>(type_info, "PlayFab.ServerModels", "RemovePlayerTagResult");
        }
        inline app::RemovePlayerTagResult* create() {
            return il2cpp::create_object<app::RemovePlayerTagResult>(get_class());
        }
    } // namespace RemovePlayerTagResult
} // namespace app::classes::types
