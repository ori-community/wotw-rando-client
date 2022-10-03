#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDsUnityHttpPlugin_Post_d_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OneDsUnityHttpPlugin_Post_d_1__Class** type_info;
        inline app::OneDsUnityHttpPlugin_Post_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDsUnityHttpPlugin_Post_d_1__Class>(type_info, "PlayFab.Internal", "OneDsUnityHttpPlugin", "<Post>d__1");
        }
        inline app::OneDsUnityHttpPlugin_Post_d_1* create() {
            return il2cpp::create_object<app::OneDsUnityHttpPlugin_Post_d_1>(get_class());
        }
    } // namespace OneDsUnityHttpPlugin_Post_d_1
} // namespace app::classes::types
