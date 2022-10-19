#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartGameResult {
        inline app::StartGameResult__Class** type_info = (app::StartGameResult__Class**)(modloader::win::memory::resolve_rva(0x047428E8));
        inline app::StartGameResult__Class* get_class() {
            return il2cpp::get_class<app::StartGameResult__Class>(type_info, "PlayFab.ClientModels", "StartGameResult");
        }
        inline app::StartGameResult* create() {
            return il2cpp::create_object<app::StartGameResult>(get_class());
        }
    } // namespace StartGameResult
} // namespace app::classes::types
