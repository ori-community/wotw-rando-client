#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabUnityHttp_Post_d_20 {
        inline app::PlayFabUnityHttp_Post_d_20__Class** type_info = (app::PlayFabUnityHttp_Post_d_20__Class**)(modloader::win::memory::resolve_rva(0x0477BD08));
        inline app::PlayFabUnityHttp_Post_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabUnityHttp_Post_d_20__Class>(type_info, "PlayFab.Internal", "PlayFabUnityHttp", "<Post>d__20");
        }
        inline app::PlayFabUnityHttp_Post_d_20* create() {
            return il2cpp::create_object<app::PlayFabUnityHttp_Post_d_20>(get_class());
        }
    } // namespace PlayFabUnityHttp_Post_d_20
} // namespace app::classes::types
