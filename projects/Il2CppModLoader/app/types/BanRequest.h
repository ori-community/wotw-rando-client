#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BanRequest {
        namespace {
            app::BanRequest__Class* type_info_ref = nullptr;
        }
        app::BanRequest__Class** type_info = &type_info_ref;
        inline app::BanRequest__Class* get_class() {
            return il2cpp::get_class<app::BanRequest__Class>(type_info, "PlayFab.ServerModels", "BanRequest");
        }
        inline app::BanRequest* create() {
            return il2cpp::create_object<app::BanRequest>(get_class());
        }
        inline app::BanRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::BanRequest__Array>(get_class(), size);
        }
    } // namespace BanRequest
} // namespace app::classes::types
