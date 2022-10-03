#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyResponse_2__Class** type_info;
        inline app::EmptyResponse_2__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_2__Class>(type_info, "PlayFab.MultiplayerModels", "EmptyResponse");
        }
        inline app::EmptyResponse_2* create() {
            return il2cpp::create_object<app::EmptyResponse_2>(get_class());
        }
    } // namespace EmptyResponse_2
} // namespace app::classes::types
