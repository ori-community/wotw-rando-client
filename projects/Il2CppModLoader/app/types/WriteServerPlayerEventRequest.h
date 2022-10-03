#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteServerPlayerEventRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteServerPlayerEventRequest__Class** type_info;
        inline app::WriteServerPlayerEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteServerPlayerEventRequest__Class>(type_info, "PlayFab.ServerModels", "WriteServerPlayerEventRequest");
        }
        inline app::WriteServerPlayerEventRequest* create() {
            return il2cpp::create_object<app::WriteServerPlayerEventRequest>(get_class());
        }
    } // namespace WriteServerPlayerEventRequest
} // namespace app::classes::types
