#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlayFabEventRouter {
        inline app::IPlayFabEventRouter__Class** type_info = (app::IPlayFabEventRouter__Class**)(modloader::win::memory::resolve_rva(0x04745890));
        inline app::IPlayFabEventRouter__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEventRouter__Class>(type_info, "PlayFab", "IPlayFabEventRouter");
        }
    } // namespace IPlayFabEventRouter
} // namespace app::classes::types
