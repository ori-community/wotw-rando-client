#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetProfileLanguageResponse {
        inline app::SetProfileLanguageResponse__Class** type_info = (app::SetProfileLanguageResponse__Class**)(modloader::win::memory::resolve_rva(0x0471BDA0));
        inline app::SetProfileLanguageResponse__Class* get_class() {
            return il2cpp::get_class<app::SetProfileLanguageResponse__Class>(type_info, "PlayFab.ProfilesModels", "SetProfileLanguageResponse");
        }
        inline app::SetProfileLanguageResponse* create() {
            return il2cpp::create_object<app::SetProfileLanguageResponse>(get_class());
        }
    } // namespace SetProfileLanguageResponse
} // namespace app::classes::types
