#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabIdfa {
        inline app::PlayFabIdfa__Class** type_info = (app::PlayFabIdfa__Class**)(modloader::win::memory::resolve_rva(0x0471B998));
        inline app::PlayFabIdfa__Class* get_class() {
            return il2cpp::get_class<app::PlayFabIdfa__Class>(type_info, "PlayFab.Internal", "PlayFabIdfa");
        }
        inline app::PlayFabIdfa* create() {
            return il2cpp::create_object<app::PlayFabIdfa>(get_class());
        }
    } // namespace PlayFabIdfa
} // namespace app::classes::types
