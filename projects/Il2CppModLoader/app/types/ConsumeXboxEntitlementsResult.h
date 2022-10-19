#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsumeXboxEntitlementsResult {
        inline app::ConsumeXboxEntitlementsResult__Class** type_info = (app::ConsumeXboxEntitlementsResult__Class**)(modloader::win::memory::resolve_rva(0x04719480));
        inline app::ConsumeXboxEntitlementsResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumeXboxEntitlementsResult__Class>(type_info, "PlayFab.ClientModels", "ConsumeXboxEntitlementsResult");
        }
        inline app::ConsumeXboxEntitlementsResult* create() {
            return il2cpp::create_object<app::ConsumeXboxEntitlementsResult>(get_class());
        }
    } // namespace ConsumeXboxEntitlementsResult
} // namespace app::classes::types
