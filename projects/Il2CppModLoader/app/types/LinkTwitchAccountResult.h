#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkTwitchAccountResult {
        inline app::LinkTwitchAccountResult__Class** type_info = (app::LinkTwitchAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047440F8));
        inline app::LinkTwitchAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkTwitchAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkTwitchAccountResult");
        }
        inline app::LinkTwitchAccountResult* create() {
            return il2cpp::create_object<app::LinkTwitchAccountResult>(get_class());
        }
    } // namespace LinkTwitchAccountResult
} // namespace app::classes::types
