#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLanguageListResponse {
        inline app::GetLanguageListResponse__Class** type_info = (app::GetLanguageListResponse__Class**)(modloader::win::memory::resolve_rva(0x047939E0));
        inline app::GetLanguageListResponse__Class* get_class() {
            return il2cpp::get_class<app::GetLanguageListResponse__Class>(type_info, "PlayFab.LocalizationModels", "GetLanguageListResponse");
        }
        inline app::GetLanguageListResponse* create() {
            return il2cpp::create_object<app::GetLanguageListResponse>(get_class());
        }
    } // namespace GetLanguageListResponse
} // namespace app::classes::types
