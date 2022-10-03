#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteTitleEventRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteTitleEventRequest__Class** type_info;
        inline app::WriteTitleEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteTitleEventRequest__Class>(type_info, "PlayFab.ClientModels", "WriteTitleEventRequest");
        }
        inline app::WriteTitleEventRequest* create() {
            return il2cpp::create_object<app::WriteTitleEventRequest>(get_class());
        }
    } // namespace WriteTitleEventRequest
} // namespace app::classes::types
