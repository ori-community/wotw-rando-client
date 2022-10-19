#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddPlayerTagResult {
        inline app::AddPlayerTagResult__Class** type_info = (app::AddPlayerTagResult__Class**)(modloader::win::memory::resolve_rva(0x04746AF8));
        inline app::AddPlayerTagResult__Class* get_class() {
            return il2cpp::get_class<app::AddPlayerTagResult__Class>(type_info, "PlayFab.ServerModels", "AddPlayerTagResult");
        }
        inline app::AddPlayerTagResult* create() {
            return il2cpp::create_object<app::AddPlayerTagResult>(get_class());
        }
    } // namespace AddPlayerTagResult
} // namespace app::classes::types
