#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDSEventsAPI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OneDSEventsAPI__Class** type_info;
        inline app::OneDSEventsAPI__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventsAPI__Class>(type_info, "PlayFab", "OneDSEventsAPI");
        }
        inline app::OneDSEventsAPI* create() {
            return il2cpp::create_object<app::OneDSEventsAPI>(get_class());
        }
    } // namespace OneDSEventsAPI
} // namespace app::classes::types
