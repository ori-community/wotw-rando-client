#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse_3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyResponse_3__Class** type_info;
        inline app::EmptyResponse_3__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_3__Class>(type_info, "PlayFab.ServerModels", "EmptyResponse");
        }
        inline app::EmptyResponse_3* create() {
            return il2cpp::create_object<app::EmptyResponse_3>(get_class());
        }
    } // namespace EmptyResponse_3
} // namespace app::classes::types
