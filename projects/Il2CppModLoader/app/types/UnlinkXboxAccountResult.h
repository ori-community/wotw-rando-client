#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountResult {
        inline app::UnlinkXboxAccountResult__Class** type_info = (app::UnlinkXboxAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04788E08));
        inline app::UnlinkXboxAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkXboxAccountResult");
        }
        inline app::UnlinkXboxAccountResult* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountResult>(get_class());
        }
    } // namespace UnlinkXboxAccountResult
} // namespace app::classes::types
