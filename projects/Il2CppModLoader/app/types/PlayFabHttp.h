#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabHttp {
        inline app::PlayFabHttp__Class** type_info = (app::PlayFabHttp__Class**)(modloader::win::memory::resolve_rva(0x0478C1F0));
        inline app::PlayFabHttp__Class* get_class() {
            return il2cpp::get_class<app::PlayFabHttp__Class>(type_info, "PlayFab.Internal", "PlayFabHttp");
        }
        inline app::PlayFabHttp* create() {
            return il2cpp::create_object<app::PlayFabHttp>(get_class());
        }
    } // namespace PlayFabHttp
} // namespace app::classes::types
