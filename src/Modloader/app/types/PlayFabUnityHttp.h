#pragma once
#include <Modloader/app/structs/PlayFabUnityHttp.h>
#include <Modloader/app/structs/PlayFabUnityHttp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabUnityHttp {
        inline app::PlayFabUnityHttp__Class** type_info() {
            static app::PlayFabUnityHttp__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabUnityHttp__Class**)(modloader::win::memory::resolve_rva(0x04746EC0));
            }
            return cache;
        }
        inline app::PlayFabUnityHttp__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUnityHttp__Class>(type_info(), "PlayFab.Internal", "PlayFabUnityHttp");
        }
        inline app::PlayFabUnityHttp* create() {
            return il2cpp::create_object<app::PlayFabUnityHttp>(get_class());
        }
    } // namespace PlayFabUnityHttp
} // namespace app::classes::types
