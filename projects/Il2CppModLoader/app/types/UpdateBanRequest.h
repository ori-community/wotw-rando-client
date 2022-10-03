#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateBanRequest {
        namespace {
            app::UpdateBanRequest__Class* type_info_ref = nullptr;
        }
        app::UpdateBanRequest__Class** type_info = &type_info_ref;
        inline app::UpdateBanRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBanRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateBanRequest");
        }
        inline app::UpdateBanRequest* create() {
            return il2cpp::create_object<app::UpdateBanRequest>(get_class());
        }
        inline app::UpdateBanRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateBanRequest__Array>(get_class(), size);
        }
    } // namespace UpdateBanRequest
} // namespace app::classes::types
