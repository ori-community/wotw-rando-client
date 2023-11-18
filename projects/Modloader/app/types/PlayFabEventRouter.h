#pragma once
#include <Modloader/app/structs/PlayFabEventRouter.h>
#include <Modloader/app/structs/PlayFabEventRouter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventRouter {
        inline app::PlayFabEventRouter__Class** type_info() {
            static app::PlayFabEventRouter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEventRouter__Class**)(modloader::win::memory::resolve_rva(0x0478D590));
            }
            return cache;
        }
        inline app::PlayFabEventRouter__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventRouter__Class>(type_info(), "PlayFab", "PlayFabEventRouter");
        }
        inline app::PlayFabEventRouter* create() {
            return il2cpp::create_object<app::PlayFabEventRouter>(get_class());
        }
    } // namespace PlayFabEventRouter
} // namespace app::classes::types
