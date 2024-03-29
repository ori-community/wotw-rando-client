#pragma once
#include <Modloader/app/structs/OneDsUnityHttpPlugin_Post_d_1.h>
#include <Modloader/app/structs/OneDsUnityHttpPlugin_Post_d_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDsUnityHttpPlugin_Post_d_1 {
        inline app::OneDsUnityHttpPlugin_Post_d_1__Class** type_info() {
            static app::OneDsUnityHttpPlugin_Post_d_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneDsUnityHttpPlugin_Post_d_1__Class**)(modloader::win::memory::resolve_rva(0x0477F828));
            }
            return cache;
        }
        inline app::OneDsUnityHttpPlugin_Post_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDsUnityHttpPlugin_Post_d_1__Class>(type_info(), "PlayFab.Internal", "OneDsUnityHttpPlugin", "<Post>d__1");
        }
        inline app::OneDsUnityHttpPlugin_Post_d_1* create() {
            return il2cpp::create_object<app::OneDsUnityHttpPlugin_Post_d_1>(get_class());
        }
    } // namespace OneDsUnityHttpPlugin_Post_d_1
} // namespace app::classes::types
