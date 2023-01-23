#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetBuildResponse__Class.h>
#include <Modloader/app/structs/GetBuildResponse.h>

namespace app::classes::types {
    namespace GetBuildResponse {
        inline app::GetBuildResponse__Class** type_info = (app::GetBuildResponse__Class**)(modloader::win::memory::resolve_rva(0x04789128));
        inline app::GetBuildResponse__Class* get_class() {
            return il2cpp::get_class<app::GetBuildResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetBuildResponse");
        }
        inline app::GetBuildResponse* create() {
            return il2cpp::create_object<app::GetBuildResponse>(get_class());
        }
    } // namespace GetBuildResponse
} // namespace app::classes::types
