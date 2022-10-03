#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteEventsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteEventsResponse__Class** type_info;
        inline app::WriteEventsResponse__Class* get_class() {
            return il2cpp::get_class<app::WriteEventsResponse__Class>(type_info, "PlayFab.EventsModels", "WriteEventsResponse");
        }
        inline app::WriteEventsResponse* create() {
            return il2cpp::create_object<app::WriteEventsResponse>(get_class());
        }
    } // namespace WriteEventsResponse
} // namespace app::classes::types
