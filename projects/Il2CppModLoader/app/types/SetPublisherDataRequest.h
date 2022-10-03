#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPublisherDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetPublisherDataRequest__Class** type_info;
        inline app::SetPublisherDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetPublisherDataRequest__Class>(type_info, "PlayFab.ServerModels", "SetPublisherDataRequest");
        }
        inline app::SetPublisherDataRequest* create() {
            return il2cpp::create_object<app::SetPublisherDataRequest>(get_class());
        }
    } // namespace SetPublisherDataRequest
} // namespace app::classes::types
