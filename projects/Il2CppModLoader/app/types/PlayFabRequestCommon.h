#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabRequestCommon {
        inline app::PlayFabRequestCommon__Class** type_info = (app::PlayFabRequestCommon__Class**)(modloader::win::memory::resolve_rva(0x0474CD90));
        inline app::PlayFabRequestCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabRequestCommon__Class>(type_info, "PlayFab.SharedModels", "PlayFabRequestCommon");
        }
        inline app::PlayFabRequestCommon* create() {
            return il2cpp::create_object<app::PlayFabRequestCommon>(get_class());
        }
    } // namespace PlayFabRequestCommon
} // namespace app::classes::types
