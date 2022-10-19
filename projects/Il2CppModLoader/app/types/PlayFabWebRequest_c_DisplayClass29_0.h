#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabWebRequest_c_DisplayClass29_0 {
        inline app::PlayFabWebRequest_c_DisplayClass29_0__Class** type_info = (app::PlayFabWebRequest_c_DisplayClass29_0__Class**)(modloader::win::memory::resolve_rva(0x047625E8));
        inline app::PlayFabWebRequest_c_DisplayClass29_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabWebRequest_c_DisplayClass29_0__Class>(type_info, "PlayFab.Internal", "PlayFabWebRequest", "<>c__DisplayClass29_0");
        }
        inline app::PlayFabWebRequest_c_DisplayClass29_0* create() {
            return il2cpp::create_object<app::PlayFabWebRequest_c_DisplayClass29_0>(get_class());
        }
    } // namespace PlayFabWebRequest_c_DisplayClass29_0
} // namespace app::classes::types
