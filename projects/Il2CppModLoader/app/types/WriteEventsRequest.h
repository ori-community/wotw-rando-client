#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteEventsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteEventsRequest__Class** type_info;
        inline app::WriteEventsRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteEventsRequest__Class>(type_info, "PlayFab.EventsModels", "WriteEventsRequest");
        }
        inline app::WriteEventsRequest* create() {
            return il2cpp::create_object<app::WriteEventsRequest>(get_class());
        }
    } // namespace WriteEventsRequest
} // namespace app::classes::types
