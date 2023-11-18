#pragma once
#include <Modloader/app/structs/IPlayFabEventRouter.h>
#include <Modloader/app/structs/IPlayFabEventRouter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEventRouter {
        inline app::IPlayFabEventRouter__Class** type_info() {
            static app::IPlayFabEventRouter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlayFabEventRouter__Class**)(modloader::win::memory::resolve_rva(0x04745890));
            }
            return cache;
        }
        inline app::IPlayFabEventRouter__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEventRouter__Class>(type_info(), "PlayFab", "IPlayFabEventRouter");
        }
    } // namespace IPlayFabEventRouter
} // namespace app::classes::types
