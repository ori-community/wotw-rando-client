#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabEventRouter {
        inline app::PlayFabEventRouter__Class** type_info = (app::PlayFabEventRouter__Class**)(modloader::win::memory::resolve_rva(0x0478D590));
        inline app::PlayFabEventRouter__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventRouter__Class>(type_info, "PlayFab", "PlayFabEventRouter");
        }
        inline app::PlayFabEventRouter* create() {
            return il2cpp::create_object<app::PlayFabEventRouter>(get_class());
        }
    } // namespace PlayFabEventRouter
} // namespace app::classes::types
