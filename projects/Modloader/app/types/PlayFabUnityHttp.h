#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabUnityHttp__Class.h>
#include <Modloader/app/structs/PlayFabUnityHttp.h>

namespace app::classes::types {
    namespace PlayFabUnityHttp {
        inline app::PlayFabUnityHttp__Class** type_info = (app::PlayFabUnityHttp__Class**)(modloader::win::memory::resolve_rva(0x04746EC0));
        inline app::PlayFabUnityHttp__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUnityHttp__Class>(type_info, "PlayFab.Internal", "PlayFabUnityHttp");
        }
        inline app::PlayFabUnityHttp* create() {
            return il2cpp::create_object<app::PlayFabUnityHttp>(get_class());
        }
    } // namespace PlayFabUnityHttp
} // namespace app::classes::types
