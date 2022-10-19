#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkPSNAccountResult {
        inline app::UnlinkPSNAccountResult__Class** type_info = (app::UnlinkPSNAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04784FE0));
        inline app::UnlinkPSNAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkPSNAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkPSNAccountResult");
        }
        inline app::UnlinkPSNAccountResult* create() {
            return il2cpp::create_object<app::UnlinkPSNAccountResult>(get_class());
        }
    } // namespace UnlinkPSNAccountResult
} // namespace app::classes::types
